#include <stdio.h>
int main() {
    int a = 0, b = 10;
    for (; a < 5 && b > 0;) {
        a++;
        b--;
    }
    printf("%d %d\n", a, b);
    return 0;
}
