#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int f = 0;
    if (a == b)
        printf("equal\n");
    else
        {
            if (a > b) f = 1;
            else f = 0;
        }
    printf("%d\n", f);
    return 0;
}
