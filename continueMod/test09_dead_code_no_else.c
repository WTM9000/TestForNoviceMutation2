#include <stdio.h>

// Test: AddDeadCode=true, chain of length 3, NO final else
// Verifies dead-code insertion still works when the innermost else is absent
int main(void) {
    int vals[] = {10, 20, 30, 40};
    int n = 4;
    int i = 0;

    while (i < n) {
        int v = vals[i];
        i++;

        if (v == 10)
            printf("ten\n");
        else if (v == 20)
            printf("twenty\n");
        else if (v == 30)
            printf("thirty\n");
    }

    return 0;
}
