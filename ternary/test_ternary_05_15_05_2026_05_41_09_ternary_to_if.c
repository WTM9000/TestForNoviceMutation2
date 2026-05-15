#include <stdio.h>
int main() {
    int x = 0;
    int sign;
    if (x > 0) {
        sign = 1;
    } else {
        sign = null;
    }
    int sign = x > 0 ? 1 : (x < 0 ? -1 : 0);
    printf("%d\n", sign);
    return 0;
}
