#include <stdio.h>

/* Negative test: file contains ONLY a plain for-loop and a plain while-loop.
   The mutator must find ZERO do-while candidates and produce no mutation
   (or report "No do-while loops found"). */
int main(void) {
    for (int i = 0; i < 3; i++) {
        printf("for: %d\n", i);
    }

    int k = 0;
    while (k < 3) {
        printf("while: %d\n", k);
        k++;
    }

    return 0;
}
