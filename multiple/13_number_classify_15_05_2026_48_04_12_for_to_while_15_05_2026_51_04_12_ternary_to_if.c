#include <stdio.h>

int is_even(int n) {
    int even;
    if (n % 2 == 0) {
        even = 1;
    } else {
        even = 0;
    }
    return even;
}

int is_positive(int n) {
    int pos = (n > 0) ? 1 : 0;
    return pos;
}

int digit_sum(int n) {
    if (n < 0) n = -n;
    int sum = 0;
    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int is_perfect(int n) {
    if (n < 2) return 0;
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum = sum + i;
            if (i != n / i) {
                sum = sum + n / i;
            }
        }
    }
    int perfect = (sum == n) ? 1 : 0;
    return perfect;
}

int main() {
    int nums[6] = {6, 7, 28, -4, 496, 12};
    int i = 0;
    while (i < 6) {
        int n = nums[i];
        printf("%d: even=%d pos=%d dsum=%d perfect=%d\n",
               n, is_even(n), is_positive(n), digit_sum(n), is_perfect(n));
         i++;
         }
    return 0;
}
