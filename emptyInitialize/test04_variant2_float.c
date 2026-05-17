#include <stdio.h>

// Test: Variant 2 — float with initializer
// Expected: float f = 0.0;
//           f = 1.5;
int main(void) {
    float f = 1.5f;
    printf("%f\n", f);
    return 0;
}
