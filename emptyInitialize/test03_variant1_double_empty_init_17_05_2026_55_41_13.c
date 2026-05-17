#include <stdio.h>

// Test: Variant 1 — double without initializer
// Expected: double d = 0.0;
int main(void) {
    int d = 0;
    d = 3.14;
    printf("%f\n", d);
    return 0;
}
