/* test06_inside_while_body.c
 * Assignment inside a while loop body (braced).
 * Tests that the mutation is applied correctly inside loop context.
 */
#include <stdio.h>

int main(void) {
    int i = 0;
    int last = 0;
    int arr[5] = {10, 20, 30, 40, 50};

    while (i < 5) {
        last = arr[i];
        i++;
    }

    printf("last = %d\n", last);
    return 0;
}
