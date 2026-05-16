/* test04_pointer.c
 * LHS is a pointer variable, RHS is a pointer variable.
 * Both are simple identifiers — should be a valid candidate.
 */
#include <stdio.h>

int main(void) {
    int value = 42;
    int *p = &value;
    int *q = NULL;

    q = p;

    printf("*q = %d\n", *q);
    return 0;
}
