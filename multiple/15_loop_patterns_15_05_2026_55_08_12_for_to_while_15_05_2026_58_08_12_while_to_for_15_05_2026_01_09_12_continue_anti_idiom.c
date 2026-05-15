#include <stdio.h>

int sum_even(int n) {
    int sum = 0;
    int i = 0;
    for (; i <= n;)  {
        if (i % 2 != 0) {
            i = i + 1;
            continue;
        }
        sum = sum + i;
        i = i + 1;
    }
    return sum;
}

int sum_odd(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum = sum + i;
         i += 2;
         }
    return sum;
}

int count_divisible(int lo, int hi, int d) {
    int count = 0;
    int i = lo;
    while (i <= hi) {
        if (i % d == 0) {
            count = count + 1;
        }
        i = i + 1;
    }
    return count;
}

int find_first_over(int *arr, int n, int limit) {
    int result = -1;
    for (int i = 0; i < n; i++) {
        if (!(arr[i] > limit))
            continue;
        result = i;
        break;
    }
    return result;
}

int main() {
    printf("Sum even 1..10: %d\n", sum_even(10));
    printf("Sum odd 1..9: %d\n", sum_odd(9));
    printf("Divisible by 3 in [1,20]: %d\n", count_divisible(1, 20, 3));
    int arr[5] = {2, 5, 8, 1, 9};
    printf("First over 6 at idx: %d\n", find_first_over(arr, 5, 6));
    return 0;
}
