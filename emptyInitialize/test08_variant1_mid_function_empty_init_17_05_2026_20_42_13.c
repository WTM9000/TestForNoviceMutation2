#include <stdio.h>

// Test: Variant 1 — declaration in the middle of a function body
// Expected: long count = 0;
void process(int n) {
    printf("start\n");
    int count = 0;
    count = n * 2;
    printf("%ld\n", count);
}

int main(void) {
    process(5);
    return 0;
}
