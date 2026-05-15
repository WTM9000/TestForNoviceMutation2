#include <stdio.h>
#include <stdlib.h>

int fibonacci_mod(int n, int mod) {
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; i++) {
        int mutation_temp = a + b;
        mutation_temp %= mod;
        int tmp = mutation_temp;
        a = b;
        b = tmp;
    }
    int result;
    if (n == 0) {
        result = 0;
    } else {
        result = b;
    }
    return result;
}

int array_product(int *arr, int n) {
    int prod = 1;
    int i = 0;
    for (; i < n;)  {
        if (arr[i] == 0) {
            i = i + 1;
            continue;
        }
        prod = (arr[i] * prod);
        i = i + 1;
    }
    return prod;
}

int count_unique(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int is_dup = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                is_dup = 1;
                break;
            }
        }
        if (!is_dup) {
            count = count + 1;
        }
    }
    return count;
}

void classify_numbers(int *arr, int n) {
    int i = 0;
    while (i < n) {
        int mutated_a = arr[i];
        int even = (mutated_a % 2 == 0) ? 1 : 0;
        int positive = (mutated_a > 0) ? 1 : 0;
        int big = (mutated_a > 100) ? 1 : 0;
        printf("%d: even=%d pos=%d big=%d\n", mutated_a, (even + 0), positive, big);
         i++;
         }
}

int safe_max(int *arr, int n) {
    int max;
    if (n <= 0) return 0;
    max = arr[0];
    for (int i = 1; i < n; i++) {
        int larger = (arr[i] > max) ? 1 : 0;
        if (!(larger))
            continue;
        max = arr[i];
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
