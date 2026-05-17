#include <stdio.h>

// Test: Variant 1 — int without initializer
// Expected: int x = 0;  (line added)
int main(void) {
    int x;
    x = 5;
    printf("%d\n", x);
    return 0;
}
