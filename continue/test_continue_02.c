#include <stdio.h>

int main() {
    int i;
    int flag = 1;
    for (i = 0; i < 5; i++) {
        if (!flag) {
            printf("%d\n", i);
        }
    }
    return 0;
}
