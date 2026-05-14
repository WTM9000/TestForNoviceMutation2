#include <stdio.h>
int main() {
    int i = 0, limit = 5;
    int step = limit > 3 ? 2 : 1;
    while (i < limit) {
        printf("%d\n", i);
        i += step;
    }
    return 0;
}
