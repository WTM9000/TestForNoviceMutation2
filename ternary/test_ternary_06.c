#include <stdio.h>
int main() {
    int x = 5;
    int result = x > 0
        ? 100
        : -100;
    printf("%d\n", result);
    return 0;
}
