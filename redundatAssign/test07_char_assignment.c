/* test07_char_assignment.c
 * Simple char-to-char assignment.
 * Tests that the mutation handles non-int scalar types.
 */
#include <stdio.h>

int main(void) {
    char src = 'A';
    char dst = '\0';

    dst = src;

    printf("dst = %c\n", dst);
    return 0;
}
