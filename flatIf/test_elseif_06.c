#include <stdio.h>

int main() {
    int x = 1;
    int y = 2;
    if (x < 0) {
        printf("x neg\n");
    } else if (x > 0) {
        printf("x pos\n");
    }
    if (y < 0) {
        printf("y neg\n");
    } else if (y > 0) {
        printf("y pos\n");
    }
    return 0;
}
