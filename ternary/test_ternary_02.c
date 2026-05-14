#include <stdio.h>
int sign(int x) {
    return x >= 0 ? x : -x;
}
int main() {
    printf("%d\n", sign(-3));
    return 0;
}
