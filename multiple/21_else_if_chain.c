#include <stdio.h>

void classify_speed(int kmh) {
    if (kmh < 0) {
        printf("Invalid\n");
    } else {
        if (kmh == 0) {
            printf("Stopped\n");
        } else {
            if (kmh < 30) {
                printf("Slow\n");
            } else {
                if (kmh < 90) {
                    printf("Normal\n");
                } else {
                    if (kmh < 150) {
                        printf("Fast\n");
                    } else {
                        printf("Very fast\n");
                    }
                }
            }
        }
    }
}

int tax_bracket(double income) {
    int bracket = 0;
    if (income > 0.0) {
        if (income <= 10000.0) {
            bracket = 1;
        } else {
            if (income <= 50000.0) {
                bracket = 2;
            } else {
                if (income <= 100000.0) {
                    bracket = 3;
                } else {
                    bracket = 4;
                }
            }
        }
    }
    return bracket;
}

int main() {
    classify_speed(0);
    classify_speed(25);
    classify_speed(100);
    classify_speed(200);
    printf("Tax bracket 75000: %d\n", tax_bracket(75000.0));
    printf("Tax bracket 8000: %d\n", tax_bracket(8000.0));
    return 0;
}
