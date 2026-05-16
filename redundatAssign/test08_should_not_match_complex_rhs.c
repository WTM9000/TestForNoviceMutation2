/* test08_should_not_match_complex_rhs.c
 * RHS is an arithmetic expression, a function call, and an array element.
 * None of these should match as a simple identifier assignment.
 * Expected: mutation finds zero candidates in this file.
 */
#include <stdio.h>

int get_val(void) { return 5; }

int main(void) {
    int arr[3] = {1, 2, 3};
    int a = 0, b = 0, c = 0;

    a = arr[0];           /* rhs is array access — not a plain Reference */
    b = get_val();        /* rhs is a Call — must be excluded */
    c = a + b;            /* rhs is BinaryOperator — must be excluded */

    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}
