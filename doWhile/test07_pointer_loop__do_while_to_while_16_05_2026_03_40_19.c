#include <stdio.h>

/* do-while walks a pointer through an array.
   Tests that the mutation works when the loop variable is a pointer,
   not a simple integer. */
int main(void) {
    int arr[] = {10, 20, 30, 40, 0};
    int *p = arr;

        printf("value = %d\n", *p);
        p++;
while (*p != 0) {
        printf("value = %d\n", *p);
        p++;
    }

    return 0;
}
