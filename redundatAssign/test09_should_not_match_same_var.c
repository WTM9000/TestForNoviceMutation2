/* test09_should_not_match_same_var.c
 * Assignment where lhs == rhs (x = x).
 * Must be excluded: inserting x = x = x would be triply redundant and
 * signals a pre-existing no-op, not a mutation target.
 * Expected: mutation finds zero candidates in this file.
 */
#include <stdio.h>

int main(void) {
    int x = 10;

    x = x;   /* self-assignment: lhs == rhs, must be excluded */

    printf("x = %d\n", x);
    return 0;
}
