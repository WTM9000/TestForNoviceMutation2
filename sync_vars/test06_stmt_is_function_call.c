/* test06 - One candidate is a function call (ExpressionStatement).
 * In-scope binary expr: n + 1 (Variant A available).
 * Expected: either statement can be wrapped, both valid */
#include <stdio.h>

void greet(int n) {
    int x = n + 1;
    printf("hello
");
}
