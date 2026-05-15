#include <stdio.h>

#define SIZE 3

void matrix_multiply(int a[SIZE][SIZE], int b[SIZE][SIZE], int c[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            c[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}

int matrix_trace(int m[SIZE][SIZE]) {
    int trace = 0;
    int i = 0;
    while (i < SIZE) {
        trace = trace + m[i][i];
         i++;
         }
    return trace;
}

int is_symmetric(int m[SIZE][SIZE]) {
    int sym = 1;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < i; j++) {
            if (m[i][j] != m[j][i]) {
                sym = 0;
                break;
            }
        }
    }
    return sym;
}

int main() {
    int a[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[SIZE][SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[SIZE][SIZE];
    matrix_multiply(a, b, c);
    printf("Trace of A: %d\n", matrix_trace(a));
    int sym;
    if (is_symmetric(a)) {
        sym = 1;
    } else {
        sym = 0;
    }
    printf("A is symmetric: %d\n", sym);
    return 0;
}
