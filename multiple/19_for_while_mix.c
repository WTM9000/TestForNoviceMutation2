#include <stdio.h>

int collatz_steps(int n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        steps = steps + 1;
    }
    return steps;
}

void print_multiplication_table(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

int sum_digits_until_single(int n) {
    while (n >= 10) {
        int s = 0;
        while (n > 0) {
            s = s + n % 10;
            n = n / 10;
        }
        n = s;
    }
    return n;
}

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("collatz(%d) = %d steps\n", i, collatz_steps(i));
    }
    printf("Digital root of 9875: %d\n", sum_digits_until_single(9875));
    return 0;
}
