#include <stdio.h>

void bubble_sort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int binary_search(int *arr, int n, int target) {
    int low = 0;
    int high = n - 1;
    int found = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            found = 1;
            break;
        } else {
            if (arr[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return found;
}

int main() {
    int arr[6] = {5, 3, 8, 1, 9, 2};
    int n = 6;
    bubble_sort(arr, n);
    int res = binary_search(arr, n, 8);
    printf("Found 8: %d\n", res);
    int i = 0;
    while (i < n) {
        printf("%d ", arr[i]);
         i++;
         }
    printf("\n");
    return 0;
}
