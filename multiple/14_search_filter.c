#include <stdio.h>

int linear_search(int *arr, int n, int target) {
    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            idx = i;
            break;
        }
    }
    return idx;
}

int count_greater(int *arr, int n, int threshold) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int over = (arr[i] > threshold) ? 1 : 0;
        count = count + over;
    }
    return count;
}

int count_in_range(int *arr, int n, int lo, int hi) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= lo && arr[i] <= hi) {
            count = count + 1;
        }
    }
    return count;
}

int all_positive(int *arr, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            result = 0;
            break;
        }
    }
    return result;
}

int main() {
    int data[8] = {4, 15, 7, 22, 3, 18, 11, 9};
    int n = 8;
    printf("Search 18: idx=%d\n", linear_search(data, n, 18));
    printf("Greater than 10: %d\n", count_greater(data, n, 10));
    printf("In [5,15]: %d\n", count_in_range(data, n, 5, 15));
    int ap = all_positive(data, n) ? 1 : 0;
    printf("All positive: %d\n", ap);
    return 0;
}
