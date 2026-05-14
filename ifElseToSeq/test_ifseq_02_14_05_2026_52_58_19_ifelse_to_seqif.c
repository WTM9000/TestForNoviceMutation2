#include <stdio.h>

int main() {
    int x = 0;
    if (x > 0) {
        printf("positive\n");
    }
    if (!(x > 0) && x < 0) {
        printf("negative\n");
    }
    if (!(x > 0) && !(x < 0)) {
        printf("zero\n");
    }
    return 0;
}
