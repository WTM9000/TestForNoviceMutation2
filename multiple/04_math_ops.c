#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int lcm(int a, int b) {
    int g = gcd(a, b);
    int result = (a / g) * b;
    return result;
}

int is_prime(int n) {
    int prime = 1;
    if (n < 2) {
        prime = 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
    return prime;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result = result * base;
    }
    return result;
}

int main() {
    int a = 12;
    int b = 18;
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    printf("LCM(%d, %d) = %d\n", a, b, lcm(a, b));
    int p = is_prime(17) ? 1 : 0;
    printf("17 is prime: %d\n", p);
    printf("2^10 = %d\n", power(2, 10));
    return 0;
}
