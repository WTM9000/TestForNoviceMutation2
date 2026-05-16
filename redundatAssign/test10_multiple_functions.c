/* test10_multiple_functions.c
 * Several functions, each containing at least one valid candidate.
 * Tests that the repository collects candidates across the whole translation unit.
 */
#include <stdio.h>

void swap_copy(int a, int b, int *out_a, int *out_b) {
    *out_a = b;
    *out_b = a;
}

int identity(int src) {
    int result = 0;
    result = src;
    return result;
}

int main(void) {
    int x = 3, y = 7;
    int cx = 0, cy = 0;

    swap_copy(x, y, &cx, &cy);

    int z = 0;
    z = cx;

    printf("z = %d\n", z);
    return 0;
}
