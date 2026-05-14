#include <stdio.h>

int main() {
    int x = 1;
    int y = 2;
    if (x == 1) {
        printf("x=1\n");
    } else if (x == 2) {
        if (y == 1) {
            printf("y=1\n");
        } else {
            if (y == 2) {
                printf("y=2\n");
            }
        }
    } else {
        printf("other\n");
    }
    return 0;
}
