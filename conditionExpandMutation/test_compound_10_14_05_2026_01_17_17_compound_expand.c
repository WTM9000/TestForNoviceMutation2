#include <stdio.h>

int main() {
    int x = 1;
    int a = 5;
    int b = 3;
    if (x > 0) {
        if (a > 0) {
                if (b > 0) {
                    printf("nested\n");
                }
        }
    }
    return 0;
}
