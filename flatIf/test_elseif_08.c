#include <stdio.h>

int main() {
    int x = 5;
    int y = 3;
    if (x < 0) {
        printf("negative\n");
    } else if (x > 0) {
        if (y > 0) {
            printf("both positive\n");
        }
    }
    return 0;
}
