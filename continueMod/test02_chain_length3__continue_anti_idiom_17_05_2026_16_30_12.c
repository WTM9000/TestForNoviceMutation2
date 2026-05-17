#include <stdio.h>

// Test: else-if chain of length 3 (two else-if branches + final else)
// Expected mutation: three levels of nested inverted guards
int main(void) {
    int values[] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;

    while (i < n) {
        int v = values[i];
        i++;

        if (!(v == 10)) {
            if (!(v == 20)) {
                if (!(v == 30)) {
                    printf("other\n");
                    continue;
                }
                printf("thirty\n");
                continue;
            }
            printf("twenty\n");
            continue;
        }
        printf("ten\n");
    }

    return 0;
}
