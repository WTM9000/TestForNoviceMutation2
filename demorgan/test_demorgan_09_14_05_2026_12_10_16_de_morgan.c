#include <stdio.h>

int foo(int x, int y) {
    if ((!(x >= 0) || !(y >= 0))) {
        return -1;
    }
    return x + y;
}

int main() {
    printf("%d\n", foo(1, 2));
    return 0;
}
