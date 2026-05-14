#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int result = 0;
    if (!(a > 0 || b > 0)) {
        if (!(a < 10 && b < 10)) {
            result = 1;
        }
    }
    printf("%d\n", result);
    return 0;
}
