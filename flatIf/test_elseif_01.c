#include <stdio.h>

int main() {
    int x = 5;
    if (x < 0) {
        printf("negative\n");
    } else if (x == 0) {
        printf("zero\n");
    } else {
        printf("positive\n");
    }
    return 0;
}
