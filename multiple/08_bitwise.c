#include <stdio.h>

int count_bits(int n) {
    int count = 0;
    while (n != 0) {
        count = count + (n & 1);
        n = n >> 1;
    }
    return count;
}

int is_power_of_two(int n) {
    int result = (n > 0 && (n & (n - 1)) == 0) ? 1 : 0;
    return result;
}

int swap_bits(int n, int i, int j) {
    int bit_i = (n >> i) & 1;
    int bit_j = (n >> j) & 1;
    if (bit_i != bit_j) {
        n = n ^ ((1 << i) | (1 << j));
    }
    return n;
}

int reverse_bits(int n, int bits) {
    int result = 0;
    for (int i = 0; i < bits; i++) {
        result = result | (((n >> i) & 1) << (bits - 1 - i));
    }
    return result;
}

int main() {
    int x = 13;
    printf("Bits in %d: %d\n", x, count_bits(x));
    int pw = is_power_of_two(16) ? 1 : 0;
    printf("16 is power of 2: %d\n", pw);
    printf("Reversed 8-bit of %d: %d\n", x, reverse_bits(x, 8));
    return 0;
}
