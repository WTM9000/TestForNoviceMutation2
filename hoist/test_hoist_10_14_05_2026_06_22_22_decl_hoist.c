#include <stdio.h>

int main() {
    int val;
    int* p;
    printf("start\n");
    val = 10;
    p = &val;
    printf("%d\n", *p);
    return 0;
}
