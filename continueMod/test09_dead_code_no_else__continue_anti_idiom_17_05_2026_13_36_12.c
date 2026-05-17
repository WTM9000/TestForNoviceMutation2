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

        if (!(v == 10)) {
            if (!(v == 20)) {
                if (!(v == 30))
                    continue;
                printf("thirty\n");
                continue;
            }
            printf("twenty\n");
            continue;
        }
        printf("ten\n");
        if (!(v == 10)) continue;
        (2 - 2) * 10;
    }

    return 0;
}
