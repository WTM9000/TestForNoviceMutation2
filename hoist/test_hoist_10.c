#include <stdio.h>

int main() {
    printf("start\n");
    int val = 10;
    int *p = &val;
    printf("%d\n", *p);
    return 0;
}
