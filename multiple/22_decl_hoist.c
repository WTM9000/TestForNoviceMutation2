#include <stdio.h>

int process_array(int *arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        int doubled = arr[i] * 2;
        int shifted = doubled + 1;
        total = total + shifted;
    }
    return total;
}

int nested_calc(int x, int y) {
    int a = x + y;
    int b = a * 2;
    int c = b - x;
    int d = c + y;
    int result = a + b + c + d;
    return result;
}

void compute_stats(int *arr, int n) {
    int sum = 0;
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        int val = arr[i];
        sum = sum + val;
        int below = (val < min) ? 1 : 0;
        int above = (val > max) ? 1 : 0;
        if (below) min = val;
        if (above) max = val;
    }
    printf("Sum=%d Min=%d Max=%d\n", sum, min, max);
}

int main() {
    int data[4] = {3, 7, 2, 9};
    printf("Process: %d\n", process_array(data, 4));
    printf("Nested: %d\n", nested_calc(3, 5));
    compute_stats(data, 4);
    return 0;
}
