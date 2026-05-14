#include <stdio.h>

int main() {
    int a = 2, b = 3;
    if (a > b) {
        printf("a bigger\n");
    } else {
        if (b > a) {
            printf("b bigger\n");
        } else {
            printf("equal\n");
        }
    }
    return 0;
}
