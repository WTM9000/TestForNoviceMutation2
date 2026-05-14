#include <stdio.h>

int classify(int x) {
    if (x > 100) {
        return 3;
    } else if (x > 50) {
        return 2;
    } else {
        return 1;
    }
}

int sign(int x) {
    if (x > 0) {
        return 1;
    } else if (x < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    printf("%d %d\n", classify(75), sign(-3));
    return 0;
}
