#include <stdio.h>

/* Outer loop is a regular while; inner loop is do-while.
   After mutation the inner do-while becomes while + first-iteration copy,
   while the outer while must remain untouched. */
int main(void) {
    int i = 0;

    while (i < 3) {
        int j = 0;

        do {
            printf("i=%d j=%d\n", i, j);
            j++;
        } while (j < 2);

        i++;
    }

    return 0;
}
