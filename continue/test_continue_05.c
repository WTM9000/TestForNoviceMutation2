#include <stdio.h>

int isEven(int x) { return x % 2 == 0; }

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (isEven(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
