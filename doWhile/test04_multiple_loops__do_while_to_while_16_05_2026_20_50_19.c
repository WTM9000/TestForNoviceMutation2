#include <stdio.h>

/* File contains two do-while loops.
   The mutator must pick exactly one at random and leave the other intact.
   After mutation only one loop should become while + first-iteration copy. */
int main(void) {
    int a = 0;

        printf("loop A: %d\n", a);
        a++;
    while (a < 2) {
        printf("loop A: %d\n", a);
        a++;
    }

    int b = 0;

    do {
        printf("loop B: %d\n", b);
        b++;
    } while (b < 2);

    return 0;
}
