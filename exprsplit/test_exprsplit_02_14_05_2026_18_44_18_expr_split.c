#include <stdio.h>

int main() {
    int a = 3, b = 4;
    int mutation_temp = a;
    mutation_temp *= b;
    int result = mutation_temp;
    printf("%d\n", result);
    return 0;
}
