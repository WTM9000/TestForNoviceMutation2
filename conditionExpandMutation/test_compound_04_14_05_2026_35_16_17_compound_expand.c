#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 5;
    if (a > 0) {
        printf("at least one\n");
    } else {
        if (b > 0) {
            printf("at least one\n");
        } else {
            if (c > 0) {
                printf("at least one\n");
            }
        }
    }
    return 0;
}
