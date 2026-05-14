#include <stdio.h>

int main() {
    int x = 10, y = 3;
    int mutation_temp = x;
    mutation_temp -= y;
    int diff = mutation_temp;
    printf("%d\n", diff);
    return 0;
}
