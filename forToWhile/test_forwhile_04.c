#include <stdio.h>

int main() {
    int i = 0;
    for (i = 0;; i++) {
        if (i >= 5) break;
        printf("%d\n", i);
    }
    return 0;
}
