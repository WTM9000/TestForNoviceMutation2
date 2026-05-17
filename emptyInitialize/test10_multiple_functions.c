#include <stdio.h>

// Test: multiple functions, each with a candidate — mutation picks one at random
void alpha(void) {
    int x;
    x = 10;
    printf("alpha: %d\n", x);
}

void beta(void) {
    double y = 2.71;
    printf("beta: %f\n", y);
}

void gamma(void) {
    char ch;
    ch = 'G';
    printf("gamma: %c\n", ch);
}

int main(void) {
    alpha();
    beta();
    gamma();
    return 0;
}
