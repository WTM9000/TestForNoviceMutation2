#include <stdio.h>

/* do-while body spans many statements.
   Verifies that ALL body lines are copied correctly to the
   first-iteration prefix and to the while body. */
int main(void) {
    int sum = 0;
    int i   = 1;

    do {
        int square = i * i;
        sum += square;
        printf("i=%d  square=%d  sum=%d\n", i, square, sum);
        i++;
    } while (i <= 4);

    printf("total sum of squares = %d\n", sum);
    return 0;
}
