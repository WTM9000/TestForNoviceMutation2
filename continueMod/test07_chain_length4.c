#include <stdio.h>

// Test: else-if chain of length 4 (maximum nesting depth validation)
int main(void) {
    int codes[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int i = 0;

    while (i < n) {
        int c = codes[i];
        i++;

        if (c == 1)
            printf("A\n");
        else if (c == 2)
            printf("B\n");
        else if (c == 3)
            printf("C\n");
        else if (c == 4)
            printf("D\n");
        else
            printf("X\n");
    }

    return 0;
}
