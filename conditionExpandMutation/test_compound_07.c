#include <stdio.h>

int main() {
    int a = 1;
    int b = 0;
    int c = 1;
    if (a > 0 && b > 0 || c > 0) {
        printf("mixed\n");
    }
    return 0;
}
