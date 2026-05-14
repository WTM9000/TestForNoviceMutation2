#include <stdio.h>
int main() {
    int a = 2, b = 3;
    int r = (a > 0 && b > 0) ? a + b : 0;
    printf("%d\n", r);
    return 0;
}
