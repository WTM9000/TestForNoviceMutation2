#include <stdio.h>

int main() {
    int score = 75;
    if (score >= 90) {
        printf("A\n");
    } else if (score >= 75) {
        printf("B\n");
    } else if (score >= 60) {
        printf("C\n");
    } else {
        printf("F\n");
    }
    return 0;
}
