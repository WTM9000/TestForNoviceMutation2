#include <stdio.h>

int main() {
    int a = 0x01, b = 0x10;
    int mutation_temp = a;
    mutation_temp |= b;
    int combined = mutation_temp;
    printf("%d\n", combined);
    return 0;
}
