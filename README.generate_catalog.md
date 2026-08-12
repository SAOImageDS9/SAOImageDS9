# Live Region Statistics Catalog

This file is the living specification and work plan for the feature. Decisions
recorded here should be kept in sync with the implementation.

## Confirmed product decisions

- The command will be `Analysis → Make Catalog`, not a Region menu command.
- There will be one live region-statistics catalog per frame. Invoking the
  command again will raise and refresh that catalog.
- The catalog contains one row per `(region_id, component)`, using the same
  non-overlapping component semantics as the current Statistics report.
- Supported user regions are included even when they are excluded, background,
  or members of groups. Composite, hidden, and fixed-screen-size regions are
  omitted.
- The catalog records region classification with numeric `background` and
  `exclude` columns (`1` when true, `0` when false).
- All current Statistics values are included. There is no statistics-selection
  UI in the first release.
- The list of statistics is fixed for a given DS9 release. Future hard-coded
  statistics should be registered in one place and automatically become catalog
  columns with little or no catalog-specific code.
- The catalog is live. Region rows are updated after completed move, edit, or
  rotate operations; creation adds rows; deletion removes rows. Polygon vertex
  additions, moves, and deletions count as completed edits.
- Cube slice, smoothing, binning, blocking, section/crop, image reload, mosaic,
  and relevant WCS changes invalidate and update the catalog.
- Catalog coordinates are fixed at catalog creation. Image coordinates use `X`
  and `Y`; WCS coordinate headings should reflect the WCS axes, commonly a
  derivation of `RA` and `DEC`.
- Selecting a catalog row does not select or highlight its source region.
- Initial and live calculations are synchronous but use DS9's configured thread
  count. Exact medians and percentiles are required; no approximate percentile
  implementation will be used.
- Parallel workers use image data validated and mapped on the main thread. They
  do not install the current process-wide SIGBUS/SIGSEGV handler.
- The initial release does not add a public structured-statistics XPA result.
  A command such as `xpaset -p ds9 analysis make catalog` may be added after the
  internal interface is stable; existing Region and Catalog endpoints otherwise
  continue to work normally.

The feature is implementable within DS9’s existing architecture. The plan should treat it as three connected additions: a structured statistics engine, a threaded batch interface, and a live Catalog Tool model.

## Proposed behavior

`Analysis → Make Catalog` will:

1. Open a Catalog Tool associated with the current frame.
2. Measure all supported user regions using the configured DS9 thread count.
3. Create one row per `(region_id, component)`.
4. Remain synchronized with region creation, deletion, and completed geometry changes.
5. Recalculate all affected rows when relevant image data changes.
6. Discover catalog columns from registered statistic descriptors, allowing future statistics without changing the live-update machinery.

## Work plan

| Phase | Work | Principal areas |
|---|---|---|
| 1 | Finalize behavior and data contract | Design/specification |
| 2 | Refactor statistics into structured, mergeable calculations | `tksao/frame/frblt.C`, new statistics classes |
| 3 | Add structured single-region and batch frame commands | `base.h`, `frmarker.C`, `parser.Y` |
| 4 | Add bounded parallel execution | New worker/scheduler code |
| 5 | Add frame-level region lifecycle notifications | Marker collection and creation/deletion paths |
| 6 | Build the live catalog model | Tcl catalog and Starbase code |
| 7 | Add menu command and lifecycle cleanup | `manalysis.tcl`, catalog dialogs |
| 8 | Add numeric, live-update, threading, and catalog tests | Test fixtures and test harnesses |
| 9 | Add documentation and release note | Region/Catalog documentation |

## Implementation status

| Phase | Status | Notes |
|---|---|---|
| 1 | Complete | Product behavior and data-contract decisions are recorded in this file. |
| 2 | Complete (2026-08-12) | The existing statistics engine now produces typed, named results through a compile-time field registry and mergeable accumulators. The legacy Statistics report is formatted from those results. |
| 3 | Complete (2026-08-12) | Versioned Tcl dictionaries now expose the field descriptors, one region result, or an ordered batch of supported user-region results. |
| 4 | Complete (2026-08-12) | Batch results now use immutable geometry/pixel jobs and a bounded pthread work queue capped by DS9's configured thread count. |
| 5 | Next | Add frame-level region lifecycle and image invalidation notifications. |

Phase 2 introduced `RegionStatisticField`, `RegionStatisticValue`,
`RegionStatisticComponent`, `RegionStatisticResult`, and
`RegionStatisticAccumulator` in `tksao/frame/regionstats.h`. A result carries
the region ID, shape, center in reference coordinates, background/exclude
classification, area-unit interpretation, and one or more component value
maps. Stable `core.*` keys identify values independently of their display
labels.

The accumulator retains exact samples for the current upper-middle median and
can merge another accumulator. Phase 4 assigns one complete region job to one
worker, so accumulators do not currently cross a thread boundary; `merge()` is
available for a future within-region subdivision strategy. Empty
components contain `core.pixel_count = 0` while all other measurements are
missing. The existing text report continues to omit data rows for empty
components.

### 1. Define the data contract

Create two core types:

```cpp
struct StatisticField {
  string key;
  string label;
  DataType datatype;
  string unit;
  string description;
  string ucd;
  int precision;
};

struct RegionStatisticResult {
  int regionId;
  int component;
  string shape;
  Vector center;
  map<string, StatisticValue> values;
};
```

Requirements:

- Fields use stable namespaced keys such as `core.mean`.
- Display labels are separate from machine keys.
- Missing or inapplicable values remain blank, not zero.
- Results preserve region order regardless of worker completion order.
- Annuli and pandas return multiple components.

Deliverable: a documented, versionable result format usable by Tcl and potentially XPA later.

### 2. Refactor the current statistics engine

Separate pixel measurement from text formatting.

The current implementation combines:

- pixel traversal;
- inclusion testing;
- accumulation;
- median storage and sorting;
- derived calculations;
- human-readable output.

Refactor these into:

```text
region geometry snapshot
        ↓
pixel traversal
        ↓
mergeable accumulators
        ↓
named structured results
        ├── existing Statistics text formatter
        └── Catalog Tool formatter
```

The existing Statistics dialog should consume the new result and produce the same report as today. This provides a regression check: old and new results should match for every supported region type.

Add a compile-time statistic registry containing the initial “core” fields:

- sum;
- Poisson error;
- area;
- surface brightness and error;
- pixel count;
- mean;
- median;
- minimum and maximum;
- variance;
- standard deviation;
- RMS.

The accumulator interface should support per-thread instances and merging. This
prepares it for future hard-coded centroids, moments, robust measurements, or
background-subtracted photometry. Adding a registered field in a future release
must not require changes to the live catalog or table synchronization code.

Also address existing edge cases, including empty regions and regions outside the image.

### 3. Add structured frame commands

The implemented internal frame-widget commands are:

```tcl
$frame get marker $id analysis stats data $system $sky
$frame get marker analysis stats all data $system $sky
$frame get marker analysis stats fields
```

The single-region form supports live incremental updates. The batch form supports initial creation and bulk invalidations.

Tcl results should be constructed only on the main thread using `Tcl_Obj` APIs. Worker threads return plain C++ result structures.

Parser sources and generated parser files must be regenerated consistently with DS9’s build process.

The Tcl contract is a versioned dictionary. The fields command returns:

```tcl
schema_version 1 fields {
    {key core.sum label sum datatype real unit_kind data_value
     description {...} ucd {...} precision 8}
    ...
}
```

A single result contains `schema_version`, `region_id`, `shape`, numeric
`background` and `exclude`, `coordinate_system`, `sky_frame`, `area_unit`, a
typed two-element `center`, and a `components` list. Each component is:

```tcl
component 1 values {core.sum 65.0 core.pixel_count 13 ...}
```

Integer and real values are created with their corresponding `Tcl_Obj` numeric
types. Missing measurements are represented by the absence of their stable key;
they are not serialized as zero or display text. The batch command returns
`schema_version 1 regions {...}` in user-marker order. It omits unsupported and
fixed-screen-size regions, retains supported empty regions, and does not inspect
catalog markers. The commands are internal frame-widget interfaces and do not
add a public XPA endpoint.

### 4. Add threaded batch calculation

Phase 4 implements a bounded pthread worker scheduler using `Base::nthreads_`.

Preparation occurs on the main thread:

- enumerate supported user regions;
- snapshot immutable geometry;
- resolve the relevant `FitsImage`;
- capture pixel bounds and transforms;
- duplicate the marker into a job-owned geometry snapshot and freeze its inverse
  transform;
- copy finite image values and their reference coordinates from the relevant
  component bounds while the existing signal guard is active.

Workers then perform only numeric work:

- no Tcl or Tk calls;
- no AST/WCS formatting;
- no modification of markers or frame state;
- no shared result buffers.

The work queue is ordered by the number of copied pixels multiplied by the
number of angular components, an approximate numeric-work cost for load
balancing. Concurrency is capped by the configured thread count and the number
of jobs. Allocation failures produce a clear message recommending that the user
set the DS9 thread count to `1` and retry.

Results are joined and assembled on the main thread.

The existing `SETSIGBUS` implementation is never invoked concurrently. The
main thread performs all FITS access while building owned pixel snapshots;
workers never access FITS mappings or install signal handlers. This exact and
safe design can consume substantial memory for large or heavily overlapping
regions. Per product decision 11, the initial implementation has no memory
budget; allocation failure aborts the batch with the single-thread retry
recommendation.

Each region is one job. Workers perform geometry membership tests and numeric
accumulation only. Results are serialized on the main thread by walking the
original job vector, so queue scheduling cannot change marker order. The
single-region structured command and legacy Statistics report remain on their
existing synchronous path.

### 5. Add a frame-level region observer

Introduce internal frame notifications such as:

```cpp
regionAdded(id)
regionChanged(id)
regionDeleted(id)
regionsReset()
imageDataChanged()
```

For geometry changes, notify only at:

- `MOVEENDCB`;
- `EDITENDCB`;
- `ROTATEENDCB`.

Do not reuse the current Statistics callbacks because they intentionally update continuously during motion.

Creation notifications must cover all entry paths:

- interactive creation;
- region files;
- XPA and command input;
- paste;
- undo;
- templates;
- composite dissolve operations that add ordinary user regions. Composite
  markers themselves remain excluded.

Bulk operations should use a transaction or batching mechanism:

```cpp
beginRegionUpdate();
...
endRegionUpdate();
```

The observer can then issue one consolidated set of dirty IDs rather than starting a calculation for every region during file loading.

Live catalogs should observe `userMarkers` only, never `catalogMarkers`.

### 6. Implement the live Catalog Tool model

Create Tcl procedures dedicated to region-statistics catalogs:

```tcl
RegionCatalogCreate
RegionCatalogReplaceRegion
RegionCatalogDeleteRegion
RegionCatalogRecalculate
RegionCatalogReconcileSchema
RegionCatalogDestroy
```

Maintain indexes independent of physical table row positions:

```tcl
rows(region_id) = {row keys}
row(region_id,component) = logical record
```

This is important because filtering and sorting can change displayed row positions.

The model must support:

- inserting new regions;
- replacing all components of one region;
- deleting every row for a region;
- changing the number of annulus/panda components;
- preserving table selection where possible;
- refreshing filters and sorts consistently.

The schema is discovered when the catalog is created. It does not change while
that catalog is open. Statistics added in a future DS9 release appear when a new
catalog is created by that release.

Populate Starbase metadata arrays such as `DataType`, `Unit`, `Precision`, `Ucd`, and `Description`.

Avoid calling the full `CATLoadDone` path for every region update. Add an incremental table refresh path.

### 7. UI and lifecycle integration

Add `Analysis → Make Catalog` in
[manalysis.tcl](/Users/kjg/DS9/SAOImageDS9/ds9/library/manalysis.tcl).

Recommended initial behavior:

- Title: `Region Statistics — <frame>`;
- one live statistics catalog per frame;
- invoking the command again raises and refreshes the existing catalog;
- Catalog Tool `Show` defaults off;
- status reports measured, skipped, and empty regions;
- closing the catalog unsubscribes it from the frame;
- deleting the frame closes or detaches its catalog cleanly.

Possible later controls:

- Live Updates toggle;
- Recalculate All;
- thread and memory status;
- cancellation.

### 8. Testing and verification

#### Numeric regression tests

For every supported shape:

- circle;
- ellipse;
- box;
- polygon;
- annulus variants;
- panda variants.

Compare structured values with the current Statistics report using known FITS fixtures.

Cover:

- NaNs and blank pixels;
- negative values;
- empty regions;
- regions partially or completely outside the image;
- rotated regions;
- very large pixel values;
- image, physical, linear WCS, and celestial WCS units;
- mosaics and boundary behavior.

#### Live behavior tests

Verify:

- initial catalog creation;
- move, edit, and rotate update only after completion;
- create adds rows;
- delete removes rows;
- undo and paste behave correctly;
- loading and deleting many regions is batched;
- changing annulus component count reconciles rows;
- catalog closure removes observers;
- frame closure leaves no stale callbacks;
- catalog markers do not become source rows.

#### Threading tests

Compare one-thread and multi-thread results exactly or within defined floating-point tolerances.

Stress:

- many small regions;
- mixed small and large regions;
- several very large regions;
- high thread counts;
- constrained memory;
- repeated live edits;
- frame or catalog destruction around calculations.

Use thread sanitization where supported.

#### Catalog tests

Verify sorting, filtering, selection, exports, blank values, metadata, and that
row selection does not select or highlight source regions.

### 9. Documentation

Document:

- which region types support measurements;
- component-row semantics;
- included fields and units;
- live-update triggers;
- image changes that invalidate results;
- threading behavior;
- mosaic limitations;
- how developers register new hard-coded statistics for a future release.

Add a release-note entry and update Region and Catalog Tool user documentation.

## Resolved design questions

1. **Compound rows:** one row per `(region_id, component)`, matching the
   current non-overlapping Statistics components.
2. **Region scope:** include supported excluded, background, and grouped user
   regions. Omit composite, hidden, fixed-screen-size, non-area, and catalog
   regions. Record `background` and `exclude` as numeric columns.
3. **Creation/edit completion:** add interactive regions after their initial
   completed edit. Recalculate polygons after each completed vertex add, move,
   or delete. Add regions loaded in bulk after the load transaction completes.
4. **Image invalidation:** cube slice, smoothing, binning, blocking,
   section/crop, reload, mosaic, and relevant WCS changes update the catalog.
5. **Coordinates:** include image `X`/`Y` and WCS columns whose headings reflect
   the WCS axes. Freeze the catalog coordinate system at creation.
6. **Catalog count:** one live statistics catalog per frame.
7. **Selection:** catalog row selection does not select or highlight the region.
8. **Statistics:** include every current Statistics field with no selection UI.
9. **Schema:** discover a compile-time registered schema when the catalog is
   created; do not mutate schema at runtime.
10. **Execution:** use synchronous bounded threading.
11. **Memory and percentiles:** retain exact calculations. Do not impose an
    initial memory-budget scheduler; report allocation failure clearly and
    recommend setting the thread count to `1`.
12. **Signal safety:** validate/map stable read-only image data on the main
    thread; worker threads do not use the existing signal-handler macros.
13. **Floating point:** no bit-for-bit single-thread guarantee is required.
    Document the possibility of small reduction-order differences in code.
14. **Filters/sorts:** maintain a keyed source table and regenerate the
    filtered/sorted view after a coalesced update batch.
15. **XPA:** defer a new `analysis make catalog` command until the internal
    interface is stable.
16. **Empty regions:** retain each supported empty component in structured
    results with `core.pixel_count = 0` and all other measurements missing. The
    legacy Statistics text formatter omits the empty data row, preserving its
    established presentation.
17. **Structured Tcl representation:** use schema-versioned nested dictionaries
    and lists built with `Tcl_Obj` APIs. Numeric values remain typed; missing
    statistic keys are omitted. Provide separate field-descriptor, single-region,
    and ordered batch frame-widget commands as documented in Phase 3.
18. **Worker geometry snapshots:** duplicate each supported marker on the main
    thread, freeze its inverse transform, and let exactly one worker use that
    job-owned object only through matrix-based membership methods. No worker
    reads a live marker, frame, Tcl, Tk, or AST state.
19. **Worker image inputs:** copy finite pixel values and reference coordinates
    under the main-thread signal guard before starting workers. Workers never
    read `FitsImage` data or memory mappings. This favors safety and exactness
    over peak-memory efficiency for the initial release.
20. **Parallel granularity and ordering:** schedule one job per region, ordered
    by approximate numeric work. Cap workers by both `nthreads_` and job count,
    and assemble results in original user-marker order after all joins.

## Remaining open implementation issues

These do not require changing the product behavior above, but they should be
settled during Phase 1 or by a focused prototype before the dependent phase.

### D. Region observer coverage

Audit every marker insertion, removal, replacement, undo, paste, load, template,
and composite-dissolve path. Decide whether notifications belong in the marker
list abstraction or in `Base` helper methods so a path cannot silently bypass
the live catalog.

### E. Bulk transaction boundaries

Identify existing begin/end points for region-file loads and other bulk changes,
or add explicit transaction guards. Nested transactions and error unwinding must
emit one consistent final notification.

### F. Image invalidation hooks

Map each confirmed image-changing operation to an existing callback or add a
single frame data-generation notification. Avoid triggering several full
recalculations for one logical operation.

### G. WCS column names and metadata

Determine the authoritative source for axis labels such as `RA`/`DEC`, including
alternate celestial, galactic, ecliptic, and linear WCS axes. Define collision
handling if an axis label conflicts with `X`, `Y`, or a statistic label.

### H. Hidden and fixed-region detection

Confirm the exact marker properties that implement the product terms “hidden”
and “fixed-screen-size,” including whether globally hidden regions are omitted
or merely not displayed.

### I. Incremental Catalog Tool refresh

Specify the smallest safe table refresh that preserves the Catalog Tool window,
filter/sort settings, and selection without creating catalog markers. Determine
whether normal table selection behavior needs a region-statistics-specific mode.

### J. Failure atomicity

If one region fails to measure or a worker allocation fails, decide whether to
retain its previous live values, replace them with blanks plus an error field,
or abort the entire update. The UI must give an actionable error, including the
single-thread retry recommendation for allocation failures.

### L. Catalog persistence and backup

Decide whether a live generated catalog participates in DS9 session backup and
restore. If restored, determine whether it is serialized as data or recreated
from its frame and regions.


## Suggested implementation order

The first implementation milestone ended after Phase 3: structured single- and
batch-region statistics are available while the existing Statistics dialog
continues to work unchanged.

The second milestone delivered threaded batch calculation, which will be used
for initial catalog creation in Phase 6.

The third should add frame observation and live incremental updates.

This ordering isolates numerical correctness, concurrency, and lifecycle synchronization, making regressions considerably easier to diagnose.

## Decision log

- **2026-08-12 (KJG):** moved the command from Region to Analysis; clarified
  that statistic extensibility applies to future compiled releases, not runtime
  additions; resolved product questions 1–15 as recorded above.
- **2026-08-12 (implementation):** completed Phase 2. Added the registered,
  typed statistics result model and mergeable exact-median accumulator;
  refactored simple, annulus, and panda-family measurements to use it; retained
  the legacy Statistics report; and resolved empty-component behavior in
  decision 16.
- **2026-08-12 (implementation):** completed Phase 3. Added versioned typed Tcl
  field, single-region, and ordered batch results; exposed structured
  measurement through all supported marker classes; regenerated the frame
  parser; retained unsupported/fixed filtering and user-marker ordering; and
  resolved the Tcl representation in decision 17.
- **2026-08-12 (implementation):** completed Phase 4. Added job-owned marker and
  pixel snapshots, worker-safe matrix membership for every supported shape, and
  a bounded cost-ordered pthread queue. FITS access, signal handling, result
  derivation, and Tcl serialization remain on the main thread. Regression tests
  passed for legacy and structured statistics, celestial WCS output, exact
  1-versus-8-thread batch equality across all supported shape families and 51
  regions, stable marker ordering, and thread-count capping.
