#include <stdio.h>
int sign(int x) {
    if (x >= 0)     return x;
    else     return -x;
}
int main() {
    printf("%d\n", sign(-3));
    return 0;
}
