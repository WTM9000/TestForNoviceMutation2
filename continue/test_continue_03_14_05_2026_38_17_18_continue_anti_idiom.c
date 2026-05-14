#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (!(i > 2)) {
            printf("small\n");
            continue;
        }
        printf("big: %d\n", i);
    }
    return 0;
}
