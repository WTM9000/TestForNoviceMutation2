#include <stdio.h>

// Test: AddDeadCode=true, basic if/else-if/else
// After mutation, two dead-code lines must be appended:
//   if (!(x == 1)) continue;   // dead: guard already inverted above
//   <neutral expression>;       // dead: unreachable after continue
int main(void) {
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int i = 0;

    while (i < n) {
        int x = arr[i];
        i++;

        if (x == 1)
            printf("one\n");
        else if (x == 2)
            printf("two\n");
        else
            printf("other\n");
    }

    return 0;
}
