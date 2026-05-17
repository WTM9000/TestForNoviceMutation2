#include <stdio.h>

int main() {
    int val = 10;
    int* p = &val;
    printf("start\n");
    printf("%d\n", *p);
    return 0;
}
