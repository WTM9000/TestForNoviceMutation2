#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;
    int result;
    if ((!(a < 0) && !(b > 0))) {
        result = 1;
    } else {
        result = 0;
    }
    printf("%d\n", result);
    return 0;
}
