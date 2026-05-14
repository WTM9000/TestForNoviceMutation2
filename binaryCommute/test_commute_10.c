#include <stdio.h>

int main() {
    int a = 1;
    int b = 1;
    int i = 0;
    while (a && b) {
        i++;
        if (i >= 3) break;
    }
    printf("%d\n", i);
    return 0;
}
