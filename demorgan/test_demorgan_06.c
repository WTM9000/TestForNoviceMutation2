#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 1;
    int result = 0;
    while (!(a > 0 && b > 0))
        result++;
    printf("%d\n", result);
    return 0;
}
