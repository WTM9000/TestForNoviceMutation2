#include <stdio.h>

double celsius_to_fahrenheit(double c) {
    double f = c * 9.0 / 5.0 + 32.0;
    return f;
}

double fahrenheit_to_celsius(double f) {
    double c = (f - 32.0) * 5.0 / 9.0;
    return c;
}

int classify_temp(double celsius) {
    int cat;
    if (celsius < 0.0) {
        cat = 0;
    } else {
        if (celsius < 15.0) {
            cat = 1;
        } else {
            if (celsius < 25.0) {
                cat = 2;
            } else {
                cat = 3;
            }
        }
    }
    return cat;
}

void print_forecast(double *temps, int n) {
    int i = 0;
    while (i < n) {
        double t = temps[i];
        int hot = (t > 30.0) ? 1 : 0;
        int cold;
        if (t < 5.0) {
            cold = 1;
        } else {
            cold = 0;
        }
        printf("Day %d: %.1fC (hot=%d, cold=%d)\n", i + 1, t, hot, cold);
         i++;
         }
}

int main() {
    double temps[5] = {-3.0, 10.0, 22.5, 35.0, 18.0};
    print_forecast(temps, 5);
    printf("100F in C: %.1f\n", fahrenheit_to_celsius(100.0));
    printf("0C in F: %.1f\n", celsius_to_fahrenheit(0.0));
    return 0;
}
