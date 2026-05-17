#include <stdio.h>

// Test: Variant 1 — double without initializer
// Expected: double d = 0.0;
int main(void) {
    double d;
    d = 3.14;
    printf("%f\n", d);
    return 0;
}
