/* test01_basic_int.c
 * Basic case: simple integer assignment.
 * Expected: y = x;  ->  y = x = x;
 */
#include <stdio.h>

int main(void) {
    int x = 10;
    int y = 0;

    y = x;

    printf("y = %d\n", y);
    return 0;
}
