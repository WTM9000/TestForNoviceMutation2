#include <stdio.h>
int main() {
    int x = 2, y = 8, z = 5;
    if (x >= y) {
        printf("x not less than y\n");
    }
    if (!(y > z)) {
        printf("y not greater than z\n");
    }
    if (!(x == z)) {
        printf("x not equal z\n");
    }
    return 0;
}
