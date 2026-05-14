#include <stdio.h>

int main() {
    int x = 5;
    if (x > 10) {
        printf("big\n");
    }
    if (!(x > 10) && x > 5) {
        printf("medium\n");
    }
    if (!(x > 10) && !(x > 5) && x > 0) {
        printf("small\n");
    }
    return 0;
}
