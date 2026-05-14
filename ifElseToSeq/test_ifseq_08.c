#include <stdio.h>

int main() {
    int x = 5;
    if (x > 10) {
        printf("big\n");
    } else if (x > 5) {
        printf("medium\n");
    } else if (x > 0) {
        printf("small\n");
    }
    return 0;
}
