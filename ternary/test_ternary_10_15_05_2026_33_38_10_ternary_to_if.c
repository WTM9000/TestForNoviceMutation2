#include <stdio.h>
int double_it(int x) { return x * 2; }
int halve_it(int x) { return x / 2; }
int main() {
    int x = 6;
    int result;
    if (x % 2 == 0) {
        result = double_it(x);
    } else {
        result = halve_it(x);
    }
    printf("%d\n", result);
    return 0;
}
