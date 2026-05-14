#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int f1;
    int f2;
    if (a > b) f1 = 1;
    else f1 = 0;
    f2 = a != b;
    printf("%d %d\n", f1, f2);
    return 0;
}
