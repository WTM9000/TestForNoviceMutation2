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
    int b;
    int c;
    int d;
    int result;
    int a = x + y;
    b = a * 2;
    c = b - x;
    d = c + y;
    result = a + b + c + d;
    return result;
}

void compute_stats(int *arr, int n) {
    int sum = 0;
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        int val = arr[i];
        sum = sum + val;
        int below;
        if (val < min) {
            below = 1;
        } else {
            below = 0;
        }
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
