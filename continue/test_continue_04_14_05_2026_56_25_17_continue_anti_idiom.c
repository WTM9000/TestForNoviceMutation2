#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (!(i > 2))
            continue;
        printf("big\n");
        printf("always: %d\n", i);
    }
    return 0;
}
