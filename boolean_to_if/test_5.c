#include <stdio.h>

int main() {
    int i;
    int a = 5;
    int f = 0;
    for (i = 0; i < 3; i++)
        f = a == i;
    printf("%d\n", f);
    return 0;
}