#include <stdio.h>

int main() {
    int i = 0;
    int a = 5;
    int f = 0;
    while (i < 3)
        f = a > i;
    printf("%d\n", f);
    return 0;
}