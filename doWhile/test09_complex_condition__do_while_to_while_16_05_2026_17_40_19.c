#include <stdio.h>

/* The while-condition is a compound boolean expression.
   Verifies that the mutator copies the full condition string verbatim
   into the new while () header without truncation. */
int main(void) {
    int x = 5;
    int y = 0;

        printf("x=%d y=%d\n", x, y);
        x--;
        y++;
while (x > 0 && y < 10) {
        printf("x=%d y=%d\n", x, y);
        x--;
        y++;
    }

    return 0;
}
