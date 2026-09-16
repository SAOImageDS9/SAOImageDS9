/*
 * gen_keymap_mapsz.c
 *
 * Writes fixtures/oracle/keymap_mapsz.txt: the MapSz card a freshly built
 * KeyMap carries for a range of key populations.
 *
 * MapSz is the size of the hash table, and it is the only observable of the
 * table's growth policy -- HashFun and DoubleTableSize are both static, so a
 * port cannot be checked against them directly.  Dumping MapSz for populations
 * chosen to sit either side of each growth threshold pins the policy from
 * outside.
 *
 * The colliding-key cases are what actually drive DoubleTableSize, and they need
 * keys that land in one bucket.  HashFun cannot be called from here, so the
 * bucket is computed below with the same djb2 arithmetic keymap.c uses.  That
 * duplication is deliberate and is only ever used to *choose* keys, never to
 * check a result: if the two ever disagree the chosen sets are not
 * all-colliding, and the MapSz values stop matching, which is the signal.
 *
 * Build:
 *   cmake --build build --target gen_keymap_mapsz
 * Run (from the repository root):
 *   ./build/ast_tester/gen_keymap_mapsz > ast_tester/fixtures/oracle/keymap_mapsz.txt
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

static int mapsz_of(AstKeyMap *km) {
    /* Dump the KeyMap and scrape its MapSz card. */
    char *txt = astToString(km);
    int sz = -1;
    const char *p = strstr(txt, "MapSz =");
    if (p) sz = atoi(p + 7);
    txt = astFree(txt);
    return sz;
}

/* djb2 as HashFun computes it (keymap.c HashFun): start at 5381, skip spaces,
 * hash*33 + c, then mask.  HashFun is static so it cannot be called from here;
 * this is the same arithmetic, used only to *choose* colliding keys, never to
 * check a result. */
static int bucket_of(const char *key, unsigned long bitmask) {
    unsigned long hash = 5381;
    for (const char *p = key; *p; p++) {
        if (*p != ' ') hash = ((hash << 5) + hash) + (unsigned char) *p;
    }
    return (int) (hash & bitmask);
}

/* The first n keys of the form K<i> that land in bucket 5 of a 16-bucket table.
 * A consumer that reproduces this rule needs no key list transported to it. */
static void report_colliding(const char *label, int n) {
    AstKeyMap *km = astKeyMap(" ");
    int found = 0;
    for (long i = 0; found < n; i++) {
        char key[64];
        sprintf(key, "K%ld", i);
        if (bucket_of(key, 15) == 5) {
            astMapPut0I(km, key, found, NULL);
            found++;
        }
    }
    printf("%-28s sizeguess=%-8d nkey=%-6d MapSz=%d\n",
           label, 0, n, mapsz_of(km));
    km = astAnnul(km);
}

static void report_colliding_plus_spread(const char *label, int ncoll,
                                         int nspread) {
    AstKeyMap *km = astKeyMap(" ");
    int found = 0;
    for (long i = 0; found < ncoll; i++) {
        char key[64];
        sprintf(key, "K%ld", i);
        if (bucket_of(key, 15) == 5) {
            astMapPut0I(km, key, found, NULL);
            found++;
        }
    }
    for (int i = 0; i < nspread; i++) {
        char key[64];
        sprintf(key, "SPREAD_%d", i);
        astMapPut0I(km, key, i, NULL);
    }
    printf("%-28s sizeguess=%-8d nkey=%-6d MapSz=%d\n",
           label, 0, ncoll + nspread, mapsz_of(km));
    km = astAnnul(km);
}

static void report(const char *label, int sizeguess, int nkey,
                   const char *fmt) {
    AstKeyMap *km = astKeyMap(" ");
    if (sizeguess > 0) astSetI(km, "SizeGuess", sizeguess);
    for (int i = 0; i < nkey; i++) {
        char key[64];
        sprintf(key, fmt, i);
        astMapPut0I(km, key, i, NULL);
    }
    printf("%-28s sizeguess=%-8d nkey=%-6d MapSz=%d\n",
           label, sizeguess, nkey, mapsz_of(km));
    km = astAnnul(km);
}

int main(void) {
    astBegin;

    /* The empty and near-empty cases: MIN_TABLE_SIZE. */
    report("empty", 0, 0, "KEY_%d");
    report("four keys", 0, 4, "KEY_%d");

    /* The fixture's own key set. */
    {
        AstKeyMap *km = astKeyMap(" ");
        astMapPut0I(km, "Size", 1, NULL);
        astMapPut0I(km, "Name", 2, NULL);
        astMapPut0I(km, "Resolution", 3, NULL);
        astMapPut0I(km, "Error", 4, NULL);
        printf("%-28s sizeguess=%-8d nkey=%-6d MapSz=%d\n",
               "cap_timemap_02 keys", 0, 4, mapsz_of(km));
        km = astAnnul(km);
    }

    /* Populations that must force DoubleTableSize. */
    report("100 keys", 0, 100, "KEY_%d");
    report("500 keys", 0, 500, "KEY_%d");
    report("1000 keys", 0, 1000, "KEY_%d");

    /* A second key shape, to catch a hash that happens to be uniform
     * only for KEY_%d. */
    report("500 keys, k%d", 0, 500, "k%d");
    report("500 keys, ZZ%d_TAIL", 0, 500, "ZZ%d_TAIL");

    /* Key sets that all land in one bucket of a 16-bucket table, which is
     * what actually drives DoubleTableSize. HashFun is static, so the
     * bucket is computed here with the same djb2 keymap.c uses; if the two
     * disagree these sets are not all-colliding and the MapSz values below
     * will not match, which is itself the signal. */
    report_colliding("10 colliding", 10);   /* at the limit: no doubling */
    report_colliding("11 colliding", 11);   /* one over: doubles */
    report_colliding("40 colliding", 40);
    report_colliding("300 colliding", 300);
    report_colliding_plus_spread("40 colliding + 40 spread", 40, 40);

    /* SizeGuess: SetSizeGuess divides by 10 then rounds up. */
    report("guess 100", 100, 0, "KEY_%d");
    report("guess 160", 160, 0, "KEY_%d");
    report("guess 170", 170, 0, "KEY_%d");
    report("guess 5000", 5000, 0, "KEY_%d");
    report("guess 5000, 500 keys", 5000, 500, "KEY_%d");

    astEnd;
    return !astOK;
}
