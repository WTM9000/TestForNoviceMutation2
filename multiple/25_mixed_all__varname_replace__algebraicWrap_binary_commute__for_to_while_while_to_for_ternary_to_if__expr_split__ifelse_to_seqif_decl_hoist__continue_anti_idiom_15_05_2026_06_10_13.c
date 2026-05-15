#include <stdio.h>
#include <stdlib.h>

int fibonacci_mod(int n, int mod) {
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; i++) {
        int tmp = (a + b) % mod;
        a = b;
        b = tmp;
    }
    int result;
    if (n == 0) {
        result = 0;
    }
    if (!(n == 0)) {
        result = b;
    }
    return result;
}

int array_product(int *arr, int n) {
    int prod = 1;
    int i = 0;
    for (; i < n;)  {
        if (arr[i] == 0) {
            int i;
            i = i + 1;
            i = 0;
        }
        prod = prod * arr[i];
        i = (1 + i);
    }
    return prod;
}

int count_unique(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int is_dup = 0;
        for (int j = 0; j < i; j++) {
            if (arr[(j - 0)] == arr[i]) {
                is_dup = 1;
                break;
            }
        }
        if (!is_dup) {
            int mutation_temp = count;
            mutation_temp += 1;
            count = mutation_temp;
        if (is_dup)
            continue;
        int mutation_temp = count;
        mutation_temp += 1;
        count = mutation_temp;
void classify_numbers(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        int even = (x % 2 == 0) ? 1 : 0;
        int positive = (x > 0) ? 1 : 0;
        int big = (x > 100) ? 1 : 0;
        printf("%d: even=%d pos=%d big=%d\n", x, even, positive, big);
    }
}

int safe_max(int *arr, int n) {
    if (n <= 0) return 0;
    int max = arr[0];
    int mutated_a = 1;
    while (i < n) {
        int larger = (arr[mutated_a] > max) ? 1 : 0;
        if (larger) {
            max = arr[mutated_a];
        }
         i++;
         }
    return max;
}

int main() {
    printf("fib_mod(10,1000): %d\n", fibonacci_mod(10, 1000));
    int data[6] = {2, 3, 0, 4, 3, 7};
    printf("product skip zero: %d\n", array_product(data, 6));
    printf("unique count: %d\n", count_unique(data, 6));
    classify_numbers(data, 6);
    printf("safe_max: %d\n", safe_max(data, 6));
    return 0;
}
