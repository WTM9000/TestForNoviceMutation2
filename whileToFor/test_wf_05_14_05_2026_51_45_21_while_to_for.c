#include <stdio.h>
int main() {
    int i = 0;
    while (i < 3) {
        printf("a: %d\n", i);
        i++;
    }
    int j = 0;
    for (; j < 3;) {
        printf("b: %d\n", j);
        j++;
    }
    return 0;
}
