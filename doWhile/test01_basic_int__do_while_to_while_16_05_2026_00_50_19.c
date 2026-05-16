#include <stdio.h>

/* Basic do-while with int counter.
   Mutation target: the do-while loop in main().
   Expected result: body runs once before condition is checked. */
int main(void) {
    int i = 0;

        printf("i = %d\n", i);
        i++;
    while (i < 3) {
        printf("i = %d\n", i);
        i++;
    }

    return 0;
}
