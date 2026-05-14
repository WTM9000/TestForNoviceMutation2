#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;
    int f;
    if (a < 0 || b > 0) f = 1;
    else f = 0;
    printf("%d\n", f);
    return 0;
}
