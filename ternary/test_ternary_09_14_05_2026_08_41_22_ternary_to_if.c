#include <stdio.h>
int main() {
    int i = 0, limit = 5;
    int step;
    if (limit > 3) {
        step = 2;
    } else {
        step = 1;
    }
    while (i < limit) {
        printf("%d\n", i);
        i += step;
    }
    return 0;
}
