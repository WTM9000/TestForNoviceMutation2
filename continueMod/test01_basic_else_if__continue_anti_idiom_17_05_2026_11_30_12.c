#include <stdio.h>

// Test: basic if / else if / else inside a while loop
// Expected mutation: inverted guards with nested continue pattern
int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int i = 0;

    while (i < n) {
        int x = arr[i];
        i++;

        if (!(x == 1)) {
            if (!(x == 2)) {
                printf("other\n");
                continue;
            }
            printf("two\n");
            continue;
        }
        printf("one\n");
    }

    return 0;
}
