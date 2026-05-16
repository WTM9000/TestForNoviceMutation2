#include <stdio.h>

/* Condition is false from the start.
   A do-while executes the body at least once; a plain while would not.
   The mutation MUST preserve the first-iteration copy so the body still
   runs once even though (0 < 0) is false. */
int main(void) {
    int x = 0;

    do {
        printf("This must print exactly once.\n");
        x++;
    } while (x < 0);

    return 0;
}
