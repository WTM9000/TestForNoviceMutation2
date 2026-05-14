#include <stdio.h>

int main() {
    int a = 3, b = 4;
    int temp = 0;
    int mutation_temp = a;
    mutation_temp += b;
    int result = mutation_temp;
    printf("%d %d\n", result, temp);
    return 0;
}
