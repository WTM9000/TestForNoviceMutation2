#include <stdio.h>

// Test: each branch has a multi-statement body (braced block)
// Expected: mutation preserves all statements from each branch
int main(void) {
    int buf[] = {1, 2, 3, 4, 5};
    int n = 5;
    int i = 0;

    while (i < n) {
        int val = buf[i];
        i++;

        if (!(val == 1)) {
            if (!(val == 2)) {
                printf("branch C start\n");
                printf("branch C end\n");
                continue;
            }
            printf("branch B start\n");
            printf("branch B end\n");
            continue;
        }
        printf("branch A start\n");
        printf("branch A end\n");
    }

    return 0;
}
