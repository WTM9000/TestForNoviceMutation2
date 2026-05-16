/* test05_inside_if_body.c
 * Assignment inside a braced if-body.
 * Should be a valid standalone candidate (parent is Block, not bare ControlStructure).
 */
#include <stdio.h>

int main(void) {
    int flag = 1;
    int result = 0;
    int value = 99;

    if (flag) {
        result = value;
    }

    printf("result = %d\n", result);
    return 0;
}
