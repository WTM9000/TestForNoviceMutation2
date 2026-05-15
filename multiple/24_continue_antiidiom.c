#include <stdio.h>

int sum_skip_negative(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            continue;
        }
        sum = sum + arr[i];
    }
    return sum;
}

int count_non_zero(int *arr, int n) {
    int count = 0;
    int i = 0;
    while (i < n) {
        if (arr[i] == 0) {
            i = i + 1;
            continue;
        }
        count = count + 1;
        i = i + 1;
    }
    return count;
}

void print_non_whitespace(char *s, int len) {
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ' || s[i] == '\t') {
            continue;
        }
        printf("%c", s[i]);
    }
    printf("\n");
}

int main() {
    int data[6] = {3, -1, 5, -2, 7, 0};
    printf("Sum skip neg: %d\n", sum_skip_negative(data, 6));
    printf("Non-zero count: %d\n", count_non_zero(data, 6));
    char s[] = "h e l l o";
    print_non_whitespace(s, 9);
    return 0;
}
