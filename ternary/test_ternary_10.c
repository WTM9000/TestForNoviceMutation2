#include <stdio.h>
int double_it(int x) { return x * 2; }
int halve_it(int x) { return x / 2; }
int main() {
    int x = 6;
    int result = x % 2 == 0 ? double_it(x) : halve_it(x);
    printf("%d\n", result);
    return 0;
}
