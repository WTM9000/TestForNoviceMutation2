#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int f = 0;
    if (a == b)
        printf("equal\n");
    else
        f = a > b;
    printf("%d\n", f);
    return 0;
}