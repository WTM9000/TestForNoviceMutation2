#include <stdio.h>

int main() {
    int i = 0;
    int a = 5;
    int f = 0;
    while (i < 3)
        {
            if (a > i) f = 1;
            else f = 0;
        }
    printf("%d\n", f);
    return 0;
}
