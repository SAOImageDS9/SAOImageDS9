# AST -- World Coordinate Systems Library

The Starlink [AST library](https://starlink.eao.hawaii.edu/starlink/AST) provides
a comprehensive range of facilities for
attaching world coordinate systems to astronomical data, for
retrieving and interpreting that information in a variety of formats,
including FITS-WCS, and for generating graphical output based on it.

This library should be of interest to anyone writing astronomical
applications which need to manipulate coordinate system data,
especially celestial or spectral coordinate systems.
AST is portable and environment-independent.

Full documentation is available in the Starlink User Notes:

- [SUN/210](https://starlink.eao.hawaii.edu/devdocs/sun210.htx/sun210.html) -- Fortran documentation
- [SUN/211](https://starlink.eao.hawaii.edu/devdocs/sun211.htx/sun211.html) -- C documentation

## Building with Starlink Autotools

This is the original build system.
It requires the Starlink `starconf` tool and associated build infrastructure
(including `messgen`, `sst`, and `htx`) to be installed and in your `PATH`.
The `buildsupport` tools are expected to be found via the `STARLINK`
environment variable (typically `~/star` or `/star`).

### Prerequisites

- Starlink `starconf` and `buildsupport` tools
- GNU Autotools (autoconf >= 2.69, automake >= 1.8.2, libtool)
- A C compiler
- Optional: a Fortran compiler (for Fortran wrappers and PGPLOT support)
- Optional: libyaml, pthreads

### Build

```shell
./bootstrap
./configure --prefix=/star
make
make check
make install
```

### Autotools configure options

| Option | Description |
|--------|-------------|
| `--without-fortran` | Skip Fortran wrapper generation |
| `--without-pthreads` | Disable POSIX thread support |
| `--without-yaml` | Disable YAML channel support |
| `--with-external_pal` | Use system PAL/ERFA libraries |
| `--with-external_cminpack` | Use system CMINPACK library |
| `--with-starmem` | Use Starlink memory management library |
| `--with-memdebug` | Enable memory leak debugging |
| `--without-topinclude` | Install headers only in `includedir/star` |
| `--without-stardocs` | Build without building the documentation |
| `--disable-hyperdocs` | Omit HTML documentation, retaining the PDFs |

### Standalone Autotools releases

The standalone build uses ordinary GNU Autotools and does not require a Starlink installation.
Documentation is opt-in with `--with-stardocs`.
Install [starprolog](https://github.com/Starlink/starprolog) and a TeX installation providing `pdflatex` (on Ubuntu: `texlive-latex-extra`, `texlive-fonts-recommended`, and `texlive-science`), then run:

```shell
uv tool install --python 3.13 git+https://github.com/Starlink/starprolog.git
export PATH="$(uv tool dir --bin):$PATH"
./bootstrap.local
./configure --with-stardocs --disable-hyperdocs
make dist
```

The tarball includes `sun210.pdf`, `sun211.pdf`, their generated LaTeX, figures, and styles.
Building the library from it needs neither `starprolog` nor TeX.
Use `--with-stardocs` when configuring the tarball to install the shipped manuals as well.

`builddocs` prefers `starprolog astprep`, falling back to the historical `getatt`/`prolat` tools when `starprolog` is unavailable.
A command can also be supplied explicitly, including a direct invocation through uv:

```shell
./configure --with-stardocs --disable-hyperdocs \
  STARPROLOG="uvx --python 3.13 --from git+https://github.com/Starlink/starprolog.git starprolog"
```

To publish a release, update `version.number` (the canonical version used to generate `src/version.h` from `src/version.h.in`), commit it, and push a matching `vX.Y.Z` tag.
The Autotools workflow builds and tests the PDF-only distribution and publishes it to GitHub Releases after both platform jobs pass.
The full test-fixture archive is checked in CI but is not published.

## Building with CMake

The CMake build does not require any Starlink infrastructure.
It is an experimental build system that is currently solely used to simplify testing in a Starlink-less environment.
Documentation and release tarballs are built with Autotools as described above.
Additionally we have not tested the installation target and there is no facility for making a distribution tar file using CMake.

### Prerequisites

- CMake >= 3.24
- A C compiler
- Perl (for generating the `ast.h` public header)
- Optional: libyaml (for YAML channel support)
- Optional: pthreads (for thread safety)
- Optional: a Fortran compiler (for Fortran wrappers, requires `AST_BUILD_FORTRAN=ON`)

### Build

```shell
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --parallel
ctest --test-dir build --output-on-failure
cmake --install build --prefix /usr/local
```

The default test suite includes 41 tests covering most AST classes. See
`PLAN.md` for details on test coverage and remaining work.

For a developer-oriented build with extra warnings and sanitizers enabled:

```shell
cmake -B build-dev \
  -DCMAKE_BUILD_TYPE=Debug \
  -DAST_ENABLE_WARNINGS=ON \
  -DAST_ENABLE_SANITIZERS=ON
cmake --build build-dev
ctest --test-dir build-dev --output-on-failure
```

To limit or increase parallelism explicitly, use:

```shell
cmake --build build --parallel 8
```

This is the CMake equivalent of `make -j8`.

### Build types and compiler flags

The standard single-config CMake build types are:

- `Release` - optimized build for normal use
- `Debug` - unoptimized build with debug information
- `RelWithDebInfo` - optimized build with debug information
- `MinSizeRel` - optimized for smaller binaries

Choose one with `-DCMAKE_BUILD_TYPE=...`, for example:

```shell
cmake -B build-debug -DCMAKE_BUILD_TYPE=Debug
cmake -B build-relwithdebinfo -DCMAKE_BUILD_TYPE=RelWithDebInfo
```

If you need to add or override compiler flags, the usual CMake forms are:

```shell
cmake -B build-debug \
  -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_C_FLAGS_DEBUG="-O0 -g"
```

or for all build types:

```shell
cmake -B build-custom \
  -DCMAKE_C_FLAGS="-O0"
```

Setting `CFLAGS` in the environment before the first `cmake` configure step
also works, but using `-DCMAKE_C_FLAGS...` makes the chosen flags explicit in
the build configuration.

The warning and sanitizer flags are selected automatically for GCC vs
Clang/AppleClang, so callers only need to enable the options.

For a coverage-instrumented build:

```shell
cmake -B build-coverage \
  -DCMAKE_BUILD_TYPE=Debug \
  -DBUILD_SHARED_LIBS=OFF \
  -DAST_ENABLE_COVERAGE=ON
cmake --build build-coverage --parallel
cmake --build build-coverage --target coverage-report
cmake --build build-coverage --target coverage-html
```

With GCC and `lcov` installed, `coverage-report` runs `ctest`, captures
coverage data, and writes an LCOV report to `build-coverage/coverage/lcov.info`.
If `genhtml` is also installed, `coverage-html` generates an HTML report in
`build-coverage/coverage/html`.

With Clang/AppleClang, `AST_ENABLE_COVERAGE=ON` still enables compiler
instrumentation automatically, but the packaged `coverage-report` target is
currently only generated for GCC + `lcov`.

There is also an opt-in port of the original huge stress test:

```shell
cmake -B build-huge \
  -DCMAKE_BUILD_TYPE=Debug \
  -DAST_ENABLE_HUGE_TEST=ON
cmake --build build-huge --target testhuge_c
./build-huge/ast_tester/testhuge_c
```

`testhuge_c` is not part of the default build. It is a manual stress test
that allocates two `60001 x 60001` float arrays, can consume tens of
gigabytes of RAM, and may take a very long time to complete. It is not a
good fit for sanitizer builds or routine CI runs.

### CMake options

| Option | Default | Description |
|--------|---------|-------------|
| `BUILD_SHARED_LIBS` | `ON` | Build shared libraries |
| `BUILD_TESTING` | `ON` | Build the test program |
| `AST_BUILD_FORTRAN` | `OFF` | Build Fortran wrappers (requires a Fortran compiler) |
| `AST_WITH_PTHREADS` | `ON` | Enable POSIX thread support |
| `AST_WITH_YAML` | `ON` | Enable YAML channel support |
| `AST_WITH_EXTERNAL_PAL` | `OFF` | Use system PAL/ERFA instead of bundled |
| `AST_WITH_EXTERNAL_CMINPACK` | `OFF` | Use system CMINPACK instead of bundled |
| `AST_WITH_MEMDEBUG` | `OFF` | Enable memory leak debugging |
| `AST_ENABLE_WARNINGS` | `OFF` | Enable compiler-specific development warnings |
| `AST_ENABLE_SANITIZERS` | `OFF` | Enable address and undefined-behavior sanitizers on supported compilers |
| `AST_ENABLE_COVERAGE` | `OFF` | Enable coverage instrumentation for supported compilers |
| `AST_ENABLE_HUGE_TEST` | `OFF` | Build the manual `testhuge_c` stress test |

### Using AST from another CMake project

After installation, use `find_package`:

```cmake
find_package(ast REQUIRED)
target_link_libraries(myapp PRIVATE AST::ast AST::ast_err AST::ast_grf_2.0
    AST::ast_grf_3.2 AST::ast_grf_5.6 AST::ast_grf3d)
```

Or use pkg-config:

```shell
cc -o myapp myapp.c $(pkg-config --cflags --libs ast)
```

## License

AST is licensed under the GNU Lesser General Public License, version 3
or later. See `COPYING` for details.
