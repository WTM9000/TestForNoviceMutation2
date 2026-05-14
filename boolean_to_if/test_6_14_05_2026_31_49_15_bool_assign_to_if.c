#include <stdio.h>

int check(int a, int b) {
    int f;
    if (a == b) f = 1;
    else f = 0;
    return f;
}

int main() {
    printf("%d\n", check(3, 3));
    return 0;
}
