/* test06 - One candidate is a function call (ExpressionStatement).
 * In-scope binary expr: n + 1 (Variant A available).
 * Expected: either statement can be wrapped, both valid */
#include <stdio.h>

void greet(int n) {
    int _sv_x = n + 1;
    int _sv_y = n + 1;
    if (_sv_x == _sv_y) {
        int x = n + 1;
    }
    printf("hello
");
}
