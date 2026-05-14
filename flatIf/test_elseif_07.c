#include <stdio.h>

int main() {
    int x = 1;
    if (x < 0) {
        printf("line A\n");
        printf("line B\n");
    } else if (x == 0) {
        printf("line C\n");
        printf("line D\n");
    } else {
        printf("line E\n");
        printf("line F\n");
    }
    return 0;
}
