#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;
    int f;
    f = a < 0 || b > 0;
    printf("%d\n", f);
    return 0;
}