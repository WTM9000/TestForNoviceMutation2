#include <stdio.h>

int main() {
    int i;
    int sum = 0;
    i = 0;
    while (i < 5) {
        sum += i;
        printf("sum so far: %d\n", sum);
                                i++;
                            }
    printf("total: %d\n", sum);
    return 0;
}
