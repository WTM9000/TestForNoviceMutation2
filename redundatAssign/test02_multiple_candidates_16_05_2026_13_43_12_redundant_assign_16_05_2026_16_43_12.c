/* test02_multiple_candidates.c
 * Multiple simple assignments in sequence — each is a valid candidate.
 * Mutation should pick one at random.
 */
#include <stdio.h>

int main(void) {
    int a = 1, b = 2, c = 3;
    int x = 0, y = 0, z = 0;

    x = a = a;
    y = b;
    z = c;

    printf("x=%d y=%d z=%d\n", x, y, z);
    return 0;
}
