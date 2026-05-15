#include <stdio.h>

int fib_recursive(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int fib_iterative(int n) {
    if (n <= 0) return 0;
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; i++) {
        int tmp = a + b;
        a = b;
        b = tmp;
    }
    return b;
}

int is_fibonacci(int num) {
    int a = 0;
    int b = 1;
    int found = (num == 0) ? 1 : 0;
    while (b < num) {
        int tmp = a + b;
        a = b;
        b = tmp;
        if (b == num) {
            found = 1;
        }
    }
    return found;
}

int main() {
    for (int i = 0; i <= 10; i++) {
        int rec = fib_recursive(i);
        int iter = fib_iterative(i);
        int same = (rec == iter) ? 1 : 0;
        printf("fib(%d) = %d, match = %d\n", i, rec, same);
    }
    printf("Is 21 fib: %d\n", is_fibonacci(21));
    printf("Is 22 fib: %d\n", is_fibonacci(22));
    return 0;
}
