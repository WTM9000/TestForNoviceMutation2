#include <stdio.h>

int main() {
    int x = 5;
    if (x > 0) {
        printf("positive\n");
    }
    if (!(x > 0)) {
        printf("non-positive\n");
    }
    return 0;
}
