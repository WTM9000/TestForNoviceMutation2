#include <stdio.h>

/* do-while is inside a helper function, not main().
   Verifies that the mutator handles loops outside main correctly. */
static void count_down(int from) {
    int n = from;

    do {
        printf("%d\n", n);
        n--;
    } while (n > 0);
}

int main(void) {
    count_down(3);
    return 0;
}
