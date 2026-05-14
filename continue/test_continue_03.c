#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (i > 2) {
            printf("big: %d\n", i);
        } else {
            printf("small\n");
        }
    }
    return 0;
}
