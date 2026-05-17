#include <stdio.h>

// Test: Variant 1 — char without initializer
// Expected: char c = '\0';
int main(void) {
    char c;
    c = 'A';
    printf("%c\n", c);
    return 0;
}
