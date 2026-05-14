#include <stdio.h>

int main() {
    int i;
    int a = 5;
    int f = 0;
    for (i = 0; i < 3; i++)
        if (a == i) f = 1;
        else f = 0;
    printf("%d\n", f);
    return 0;
}
