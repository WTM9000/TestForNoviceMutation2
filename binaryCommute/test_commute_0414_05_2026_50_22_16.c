#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;
    int result;
    if ((b || a)) {
        result = 1;
    } else {
        result = 0;
    }
    printf("%d\n", result);
    return 0;
}
