#include <stdio.h>

int isEven(int x) { return x % 2 == 0; }

int main() {
    int x = 4;
    if (x > 0 && isEven(x)) {
        printf("positive even\n");
    } else if (x > 0 && !isEven(x)) {
        printf("positive odd\n");
    } else {
        printf("non-positive\n");
    }
    return 0;
}
