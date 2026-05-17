#include <stdio.h>

// Test: else-if chain of length 4 (maximum nesting depth validation)
int main(void) {
    int codes[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int i = 0;

    while (i < n) {
        int c = codes[i];
        i++;

        if (!(c == 1)) {
            if (!(c == 2)) {
                if (!(c == 3)) {
                    if (!(c == 4)) {
                        printf("X\n");
                        continue;
                    }
                    printf("D\n");
                }
                printf("C\n");
            }
            printf("B\n");
        }
        printf("A\n");
    }

    return 0;
}
