#include <stdio.h>

int main() {
    int x = 1, n = 4;
    int mutation_temp = x;
    mutation_temp <<= n;
    int shifted = mutation_temp;
    printf("%d\n", shifted);
    return 0;
}
