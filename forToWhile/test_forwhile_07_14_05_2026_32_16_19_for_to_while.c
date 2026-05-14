#include <stdio.h>

int main() {
    int i, j, k, m;
    i = 0;
    while (i < 3) {
        printf("i=%d\n", i);
                                i++;
                            }
    for (j = 0; j < 3; j++) {
        printf("j=%d\n", j);
    }
    for (k = 0; k < 3; k++) {
        printf("k=%d\n", k);
    }
    for (m = 0; m < 3; m++) {
        printf("m=%d\n", m);
    }
    return 0;
}
