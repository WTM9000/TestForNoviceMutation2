#include <stdio.h>

int main() {
    int i;
    int x = 2;
    for (i = 0; i < 3; i++) {
        if (x == 1) {
            printf("one\n");
        } else {
            if (x == 2) {
                printf("two\n");
            } else {
                printf("other\n");
            }
        }
    }
    return 0;
}
