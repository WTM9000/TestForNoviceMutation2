#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    unsigned int f;
    if (a > b) f = 1;
    else f = 0;
    printf("%u\n", f);
    return 0;
}
