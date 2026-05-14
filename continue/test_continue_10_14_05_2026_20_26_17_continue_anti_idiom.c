#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (!(i > 1))
            continue;
        printf("A: %d\n", i);
    }
    for (i = 0; i < 5; i++) {
        if (i < 3) {
            printf("B: %d\n", i);
        }
    }
    return 0;
}
