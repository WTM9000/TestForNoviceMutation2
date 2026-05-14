#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i < 3) {
            printf("small\n");
        } else if (i < 7) {
            printf("medium\n");
        }
    }
    return 0;
}
