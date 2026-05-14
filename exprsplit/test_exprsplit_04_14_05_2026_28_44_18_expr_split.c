#include <stdio.h>

int main() {
    int n = 17, m = 5;
    int mutation_temp = n;
    mutation_temp %= m;
    int rem = mutation_temp;
    printf("%d\n", rem);
    return 0;
}
