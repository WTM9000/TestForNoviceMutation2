#include <stdio.h>

int check() { return 1; }

int main() {
    int f;
    f = check();
    printf("%d\n", f);
    return 0;
}