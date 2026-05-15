#include <stdio.h>
int main() {
    int a = 2, b = 3;
    int r;
    if (a > 0 && b > 0) {
        r = a + b;
    } else {
        r = 0;
    }
    printf("%d\n", r);
    return 0;
}
