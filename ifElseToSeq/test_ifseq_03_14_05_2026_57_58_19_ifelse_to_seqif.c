#include <stdio.h>

int main() {
    int score = 75;
    if (score >= 90) {
        printf("A\n");
    }
    if (!(score >= 90) && score >= 75) {
        printf("B\n");
    }
    if (!(score >= 90) && !(score >= 75) && score >= 60) {
        printf("C\n");
    }
    if (!(score >= 90) && !(score >= 75) && !(score >= 60)) {
        printf("F\n");
    }
    return 0;
}
