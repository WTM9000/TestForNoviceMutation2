#include <stdio.h>

// Test: AddDeadCode=true, chain of length 4 inside a for loop
// Verifies both arbitrary-depth recursion AND dead-code appending together
int main(void) {
    int data[] = {1, 2, 3, 4, 5, 0};
    int n = 6;

    for (int i = 0; i < n; i++) {
        int d = data[i];

        if (d == 1)
            printf("one\n");
        else if (d == 2)
            printf("two\n");
        else if (d == 3)
            printf("three\n");
        else if (d == 4)
            printf("four\n");
        else
            printf("other\n");
    }

    return 0;
}
