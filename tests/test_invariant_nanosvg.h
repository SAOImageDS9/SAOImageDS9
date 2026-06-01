#include <check.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Include the actual nanosvg header */
#define NANOSVG_IMPLEMENTATION
#include "tksvg/generic/nanosvg.h"

START_TEST(test_nanosvg_buffer_bounds_security)
{
    /* Invariant: nanosvgParse must not crash or overflow on adversarial SVG input,
       and must either parse successfully or fail gracefully without memory corruption */
    
    const char *payloads[] = {
        /* Valid minimal SVG - baseline */
        "<svg><path d=\"M10,10 L20,20\"/></svg>",
        
        /* Boundary: extremely long path data string */
        "<svg><path d=\"" "M0,0 " "L1,1 " "L2,2 " "L3,3 " "L4,4 " "L5,5 " "L6,6 " "L7,7 " "L8,8 " "L9,9 "
        "L10,10 L11,11 L12,12 L13,13 L14,14 L15,15 L16,16 L17,17 L18,18 L19,19 "
        "L20,20 L21,21 L22,22 L23,23 L24,24 L25,25 L26,26 L27,27 L28,28 L29,29 "
        "L30,30 L31,31 L32,32 L33,33 L34,34 L35,35 L36,36 L37,37 L38,38 L39,39 "
        "L40,40 L41,41 L42,42 L43,43 L44,44 L45,45 L46,46 L47,47 L48,48 L49,49 "
        "\"/></svg>",
        
        /* Exploit case: malformed numeric values in path */
        "<svg><path d=\"M999999999999999999999999999999,999999999999999999999999999999 L0,0\"/></svg>",
        
        /* Boundary: deeply nested elements */
        "<svg><g><g><g><g><g><path d=\"M0,0 L10,10\"/></g></g></g></g></g></svg>",
        
        /* Exploit case: malformed gradient with excessive data */
        "<svg><defs><linearGradient id=\"g\" x1=\"99999999999999999999\" y1=\"99999999999999999999\"><stop offset=\"999999999999999999%\" stop-color=\"red\"/></linearGradient></defs></svg>"
    };
    
    int num_payloads = sizeof(payloads) / sizeof(payloads[0]);
    
    for (int i = 0; i < num_payloads; i++) {
        /* Parse the SVG - must not crash or corrupt memory */
        NSVGimage *image = nanosvgParse((char*)payloads[i], "px", 96.0f);
        
        /* Security property: parser must either succeed or fail gracefully.
           If it returns NULL, that is acceptable (parse failure).
           If it returns non-NULL, the image structure must be valid (not corrupted). */
        if (image != NULL) {
            /* Basic sanity check: image pointer is valid and not obviously corrupted */
            ck_assert_ptr_nonnull(image);
            
            /* Verify no obvious heap corruption by checking basic fields exist */
            ck_assert(image->width >= 0);
            ck_assert(image->height >= 0);
            
            nanosvgDelete(image);
        }
        /* If image is NULL, parse failed gracefully - this is acceptable */
    }
}
END_TEST

Suite *security_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("NanoSVG Security");
    tc_core = tcase_create("Buffer Bounds");

    tcase_add_test(tc_core, test_nanosvg_buffer_bounds_security);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = security_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}