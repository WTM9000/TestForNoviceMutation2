#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 7;
    int result = 0;
    if (!(a > 0 && b > 0)) {
        result = 1;
    }
    if (!(b < 10 || c != 0)) {
        result = 2;
    }
    printf("%d\n", result);
    return 0;
}
