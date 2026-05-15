#include <stdio.h>

int max_value(int *arr, int n) {
    int max = arr[0];
    int i = 1;
    while (i < n) {
        if (arr[i] > max) {
            max = arr[i];
        }
        i++;
    }
    return max;
}

int min_value(int *arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int sum_array(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int data[5] = {3, 1, 4, 1, 5};
    int n = 5;
    int result = (n > 0) ? sum_array(data, n) : 0;
    printf("Sum: %d\n", result);
    printf("Max: %d\n", max_value(data, n));
    printf("Min: %d\n", min_value(data, n));
    return 0;
}
