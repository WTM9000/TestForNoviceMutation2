#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = a + b;
    int f;
    if (a != b) f = 1;
    else f = 0;
    int d = a - b;
    printf("%d %d %d\n", c, f, d);
    return 0;
}
