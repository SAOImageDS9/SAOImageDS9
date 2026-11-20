/*
 * normalize_fixture.c — Read a .map file and rewrite it in standard
 * AST serialization form (via astChannel). Optionally also produce
 * the simplified .simp output.
 *
 * Usage: normalize_fixture <input.map> [<output.map> [<output.simp>]]
 *   If output.map is omitted or "-", overwrites input in place.
 *   If output.simp is provided, also writes simplified form.
 */

#include "ast.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int status = 0;
    const char *in_file;
    const char *out_map;
    const char *out_simp = NULL;
    AstChannel *chan;
    AstMapping *map, *simp;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input.map> [<output.map> [<output.simp>]]\n", argv[0]);
        return 1;
    }

    in_file = argv[1];
    out_map = (argc > 2 && strcmp(argv[2], "-") != 0) ? argv[2] : in_file;
    if (argc > 3) out_simp = argv[3];

    astWatch(&status);
    astBegin;

    chan = astChannel(NULL, NULL, "SourceFile=%s", in_file);
    map = (AstMapping *)astRead(chan);
    chan = astAnnul(chan);

    if (!map || !astOK) {
        fprintf(stderr, "Failed to read %s\n", in_file);
        return 1;
    }

    chan = astChannel(NULL, NULL, "SinkFile=%s", out_map);
    astWrite(chan, map);
    chan = astAnnul(chan);

    if (out_simp) {
        simp = astSimplify(map);
        chan = astChannel(NULL, NULL, "SinkFile=%s", out_simp);
        astWrite(chan, simp);
        chan = astAnnul(chan);
        simp = astAnnul(simp);
    }

    map = astAnnul(map);
    astEnd;

    return astOK ? 0 : 1;
}
