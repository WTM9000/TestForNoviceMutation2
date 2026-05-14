#include <stdio.h>

int check(int a, int b) {
    int f;
    f = a == b;
    return f;
}

int main() {
    printf("%d\n", check(3, 3));
    return 0;
}