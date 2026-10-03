# Unsolicited Proposal: Native ASDF/GWCS Support in SAOImageDS9

**Submitted by:** The SAOImageDS9 development team, Smithsonian Astrophysical Observatory
**Subject:** Request for funded support to add native ASDF and GWCS reading to DS9, benefiting the Nancy Grace Roman Space Telescope mission and the broader multi-mission user community
**Requested support:** 1 person-month of developer effort

## Summary

DS9 is the astronomical community's most widely used FITS image viewer — installed at essentially every major optical, X-ray, and radio observatory and archive, and long relied on by NASA missions including Chandra and HST. Roman Space Telescope data products, however, are not FITS: Roman is going all-in on the ASDF format, with calibration pipelines "exclusively designed for use with ASDF." Today, the only way to view a Roman image in DS9 is through a separate Python process (the `asdf-format/pds9` project) that requires a full astropy/asdf/gwcs installation and talks to DS9 over SAMP.

We have identified a concrete, low-risk path to reading Roman ASDF images and their exact GWCS distortion models **directly inside DS9**, with no Python dependency, by building on a capability already present — but currently unused — in a library DS9 already ships. We are requesting one month of funded developer time to implement this.

## Background

DS9's WCS handling has always been delegated to Starlink's AST library, which DS9 vendors and links against for every FITS image it displays. In investigating this proposal, we found that upstream AST already contains a class, `YamlChan`, purpose-built to read ASDF-standard YAML — including the `gwcs` transform tags Roman's world coordinate system is built from. This was not written for DS9, and DS9 has never called it, but it means the hardest part of this problem — parsing an arbitrary chain of GWCS coordinate transforms — already has a working C implementation sitting in DS9's own dependency tree.

We validated this directly against a real Roman Build22 workshop file rather than assuming it from documentation. The pixel-data half of the problem (extracting the science array from ASDF's binary blocks) is small and well-specified — comparable in scope to capabilities DS9 already has for loading raw memory arrays. The WCS half requires bridging a handful of well-defined, mechanical gaps between AST's current release and the tag versions Roman's pipeline emits — gaps Starlink's own upstream development is already closing. None of this rises to a research problem; it is scoped implementation work against a design we have already documented in detail.

## Why this matters beyond Roman

This is not a one-off Roman feature. Three factors make it a multi-mission investment:

1. **DS9's install base is the multiplier.** Any astronomer, pipeline, or facility that already has DS9 — which is to say, most of the ground- and space-based astronomical community — gains the ability to quick-look a Roman ASDF file with zero additional software. That removes a real adoption barrier: not every telescope control room, classroom, or archive quick-look tool carries a maintained Python/astropy/gwcs stack, but nearly all of them already have DS9.
2. **ASDF is not a Roman-only trend.** JWST already embeds ASDF/GWCS metadata in its products, and the format is an active, growing standard across STScI-supported missions. Work done now to make DS9 read ASDF/GWCS natively is infrastructure the next mission on this format inherits for free.
3. **The underlying capability lives in shared infrastructure, not a DS9-only patch.** Because the enabling class lives in AST — a library used well beyond DS9, throughout the Starlink software ecosystem — any fixes contributed upstream benefit that entire ecosystem, not just this one viewer.

## Proposed scope of work (1 person-month)

1. Validate and, if needed, patch the small number of AST tag/version compatibility gaps identified in our design analysis, working from real Roman sample data.
2. Implement a lightweight ASDF container reader (YAML tree + binary block parsing) inside DS9's existing image-loading framework, requiring no new external Python dependency.
3. Wire Roman's fixed data/WCS locations (`roman.data`, `roman.meta.wcs`) into DS9's existing pixel-loading and WCS-attachment machinery, replacing the current SIP polynomial *approximation* with the GWCS model read **exactly**.
4. Add a native "Open ASDF" entry to DS9's File menu and a matching scriptable command, so the capability is available both interactively and to automated pipelines — without requiring an external Python/SAMP process for the common case.
5. Test against multiple public Roman Data Workshop sample files and document remaining known limitations (e.g. arbitrary non-Roman ASDF layouts) for future work.

This scope corresponds to Phases 1–3 of a design document we have already produced in-house, based on direct investigation of DS9's codebase, the AST library, and real Roman data files. We are not requesting funding to explore whether this is feasible — we have already done that work and believe it is. We are requesting funding to build it.

## Relationship to existing work

This proposal is complementary to, not competitive with, the `asdf-format/pds9` project, which has done valuable work proving out the user-facing workflow (file browsing, header display, image selection) that a native implementation should mirror. We intend to coordinate directly with that team and with STScI throughout implementation, and expect the Python-based approach to remain the right tool for fully general ASDF files outside the scope native support will initially cover.

## Ask

We request **one person-month of funded developer effort** at the Smithsonian Astrophysical Observatory to implement the scope above, delivering native Roman ASDF/GWCS support in DS9's standard distribution. We are glad to provide our full technical design analysis and to discuss scope, timeline, and reporting requirements with the appropriate NASA program office.
