#include <stdio.h>

// Test: Variant 2 — unsigned int with initializer
// Expected: unsigned int u = 0;
//           u = 100;
int main(void) {
    unsigned int u = 100;
    printf("%u\n", u);
    return 0;
}
