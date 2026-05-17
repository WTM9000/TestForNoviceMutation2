#include <stdio.h>

// Test: else-if chain with NO final else
// Expected mutation: innermost block has empty else body, continue still emitted
int main(void) {
    int data[] = {0, 1, 2, 3};
    int n = 4;
    int i = 0;

    while (i < n) {
        int d = data[i];
        i++;

        if (d == 0)
            printf("zero\n");
        else if (d == 1)
            printf("one\n");
    }

    return 0;
}
