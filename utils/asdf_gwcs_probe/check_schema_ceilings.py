#!/usr/bin/env python3
"""Compare AST's MAKE_TEST version ceilings with the installed ASDF schemas.

`ast/src/yamlchan.c` recognizes each ASDF class with

    MAKE_TEST(Class, schema/path, major, minor)

and `MAKE_TEST` *errors* when a file's minor version exceeds that ceiling --
even when the schema revision changed nothing the reader uses. So a ceiling
that has fallen behind the ecosystem does not degrade gracefully: the whole
WCS is refused. That is not hypothetical. Before the ceilings were raised,
astropy 8.0.1 wrote `fk5-1.2.0` against a ceiling of 1.0, so every FK5,
FK4, FK4NOETERMS and Galactic GWCS was unreadable, and `icrs-1.1.0` -- what
every real Roman file uses -- sat exactly at its ceiling with no headroom.

Run this whenever the asdf-* schema packages move:

    python3 check_schema_ceilings.py [path/to/yamlchan.c]

It reports, per class, AST's ceiling against the newest installed schema, and
for anything behind, whether the intervening schema text differs in more than
`id`/`tag` lines and `$ref` version strings. A "textually identical" verdict
means raising that ceiling is safe; anything else needs the diff read by hand,
as the nine substantive ones were (all turned out to be dropped `$ref`s, a
more permissive `anyOf`, or added optional properties).

Needs the schema packages, not AST:

    pip install asdf-transform-schemas asdf-coordinates-schemas \
                asdf-wcs-schemas asdf-standard

A conda env with these plus astropy/gwcs is the other half of answering these
questions -- see TODO.md's "expensive to rediscover" section.
"""

import difflib
import glob
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
DEFAULT_YAMLCHAN = os.path.join(HERE, "..", "..", "ast", "src", "yamlchan.c")

# MAKE_TEST's Class argument is AST's spelling; the schema file on disk is
# lower case, and a few differ by more than case.
SPECIAL = {
    "fk4noeterms": "fk4noeterms",
    "supergalactic": "supergalactic",
    "ndarray": "ndarray",
}


def ast_ceilings(path):
    """[(class, schema, major, minor)] from every MAKE_TEST in yamlchan.c."""
    out = []
    src = open(path).read()
    for m in re.finditer(r'MAKE_TEST\((\w+),([\w/]+),(\d+),(\d+)(?:\)|,)', src):
        out.append((m.group(1), m.group(2), int(m.group(3)), int(m.group(4))))
    return out


def installed_schemas():
    """{class: {(major, minor): path}} over every installed schema package."""
    mods = []
    for name in ("asdf_transform_schemas", "asdf_coordinates_schemas",
                 "asdf_standard", "asdf_wcs_schemas"):
        try:
            mods.append(__import__(name))
        except ImportError:
            print("note: %s is not installed" % name, file=sys.stderr)
    found = {}
    for mod in mods:
        root = os.path.dirname(mod.__file__)
        for p in glob.glob(os.path.join(root, "**", "*.yaml"), recursive=True):
            m = re.match(r'^([A-Za-z0-9_]+)-(\d+)\.(\d+)\.(\d+)\.yaml$',
                         os.path.basename(p))
            if m:
                cls = m.group(1)
                found.setdefault(cls, {})[(int(m.group(2)), int(m.group(3)))] = p
    return found


def normalise(text):
    """Schema text with the parts a version bump always churns removed."""
    out = []
    for line in text.splitlines():
        if re.match(r'\s*(id|tag):', line):
            continue
        out.append(re.sub(r'-1\.\d+\.\d+', '-1.X.X', line).rstrip())
    return out


def substantive_diff(old_path, new_path):
    """Changed lines between two schema versions, churn excluded."""
    a = normalise(open(old_path).read())
    b = normalise(open(new_path).read())
    diff = [l for l in difflib.unified_diff(a, b, lineterm="", n=0)
            if l[:1] in "+-" and l[:3] not in ("+++", "---")]
    # A leading '#', '-' or '|' is prose or an example, not schema structure.
    return [l for l in diff if not re.match(r'^[+-]\s*(#|-|\|)', l)]


def main():
    yamlchan = sys.argv[1] if len(sys.argv) > 1 else DEFAULT_YAMLCHAN
    if not os.path.exists(yamlchan):
        sys.exit("no such file: %s" % yamlchan)

    schemas = installed_schemas()
    if not schemas:
        sys.exit("no schema packages installed; see this script's docstring")

    behind, current, unknown = [], [], []
    for cls, schema, major, minor in sorted(ast_ceilings(yamlchan)):
        key = SPECIAL.get(cls.lower(), cls.lower())
        versions = schemas.get(key)
        if not versions:
            unknown.append((cls, major, minor))
            continue
        newest = max(versions)
        if newest[0] != major:
            unknown.append((cls, major, minor))
        elif newest[1] > minor:
            old = versions.get((major, minor))
            verdict = "?"
            if old:
                real = substantive_diff(old, versions[newest])
                verdict = ("textually identical apart from refs/ids"
                           if not real else "%d substantive line(s)" % len(real))
            behind.append((cls, minor, newest[1], verdict))
        else:
            current.append(cls)

    print("AST ceilings BEHIND the installed schemas (%d):" % len(behind))
    for cls, old, new, verdict in behind:
        print("  %-28s 1.%d  ->  1.%d   %s" % (cls, old, new, verdict))
    if not behind:
        print("  (none)")
    print()
    print("up to date (%d): %s" % (len(current), ", ".join(current)))
    if unknown:
        print()
        print("no installed schema to compare (%d): %s" %
              (len(unknown), ", ".join("%s 1.%d" % (c, mi)
                                       for c, _, mi in unknown)))
        print("  Expected for classes astropy cannot serialize (ecliptic,")
        print("  altaz, supergalactic) -- see TODO.md's AST bug 9.")
    return 1 if behind else 0


if __name__ == "__main__":
    sys.exit(main())
