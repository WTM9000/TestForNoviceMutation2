#include <stdio.h>

int sum(int a, int b) {
    int mutation_temp = a;
    mutation_temp += b;
    return mutation_temp;
}

int main() {
    printf("%d\n", sum(3, 4));
    return 0;
}
