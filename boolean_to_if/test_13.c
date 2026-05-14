#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int x = 1;
    int f;
    if (x > 0) {
        if (a != b) {
            f = a <= b;
            printf("%d\n", f);
        }
    }
    return 0;
}