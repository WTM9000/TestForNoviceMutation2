#include <stdio.h>

// Test: AddDeadCode=true, chain of length 4 inside a for loop
// Verifies both arbitrary-depth recursion AND dead-code appending together
int main(void) {
    int data[] = {1, 2, 3, 4, 5, 0};
    int n = 6;

    for (int i = 0; i < n; i++) {
        int d = data[i];

        if (!(d == 1)) {
            if (!(d == 2)) {
                if (!(d == 3)) {
                    if (!(d == 4)) {
                        printf("other\n");
                        continue;
                    }
                    printf("four\n");
                    continue;
                }
                printf("three\n");
                continue;
            }
            printf("two\n");
            continue;
        }
        printf("one\n");
        if (!(d == 1)) continue;
        (2 - 2) * 10;
    }

    return 0;
}
