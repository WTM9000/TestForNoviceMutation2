#include <stdio.h>
int main() {
    int i = 0, limit = 5;
    if (limit > 3) {
        int step = 2;
    } else {
        int step = 1;
    }
    while (i < limit) {
        printf("%d\n", i);
        i += step;
    }
    return 0;
}
