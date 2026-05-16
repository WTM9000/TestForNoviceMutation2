/* test03_in_function.c
 * Assignment inside a non-main function — tests that scope does not matter.
 */
#include <stdio.h>

int double_val(int src) {
    int tmp = 0;
    tmp = src;
    return tmp * 2;
}

int main(void) {
    printf("%d\n", double_val(7));
    return 0;
}
