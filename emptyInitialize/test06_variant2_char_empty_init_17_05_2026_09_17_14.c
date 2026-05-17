#include <stdio.h>

// Test: Variant 2 — char with initializer
// Expected: char c = '\0';
//           c = 'Z';
int main(void) {
    char c = '\0';
    c = 'Z';
    printf("%c\n", c);
    return 0;
}
