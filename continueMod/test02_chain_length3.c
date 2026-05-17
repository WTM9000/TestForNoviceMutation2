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

        if (v == 10)
            printf("ten\n");
        else if (v == 20)
            printf("twenty\n");
        else if (v == 30)
            printf("thirty\n");
        else
            printf("other\n");
    }

    return 0;
}
