#include <stdio.h>

int main() {
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++) {
        sum += i;
        printf("sum so far: %d\n", sum);
    }
    printf("total: %d\n", sum);
    return 0;
}
