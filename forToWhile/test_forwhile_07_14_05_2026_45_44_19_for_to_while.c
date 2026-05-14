#include <stdio.h>

int main() {
    int i, j, k, m;
    for (i = 0; i < 3; i++) {
        printf("i=%d\n", i);
    }
    for (j = 0; j < 3; j++) {
        printf("j=%d\n", j);
    }
    k = 0;
    while (k < 3) {
        printf("k=%d\n", k);
             k++;
         }
    for (m = 0; m < 3; m++) {
        printf("m=%d\n", m);
    }
    return 0;
}
