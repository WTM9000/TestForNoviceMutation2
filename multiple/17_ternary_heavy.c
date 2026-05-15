#include <stdio.h>

int abs_val(int x) {
    int result = (x >= 0) ? x : -x;
    return result;
}

int clamp(int val, int lo, int hi) {
    int clamped = (val < lo) ? lo : ((val > hi) ? hi : val);
    return clamped;
}

int sign(int x) {
    int s = (x > 0) ? 1 : ((x < 0) ? -1 : 0);
    return s;
}

void print_status(int code) {
    printf("Status: %s\n", (code == 0) ? "OK" : "ERROR");
}

int safe_div(int a, int b) {
    int result = (b != 0) ? a / b : 0;
    return result;
}

int main() {
    printf("abs(-7) = %d\n", abs_val(-7));
    printf("clamp(15,0,10) = %d\n", clamp(15, 0, 10));
    printf("sign(-3) = %d\n", sign(-3));
    print_status(0);
    print_status(1);
    printf("safe_div(10,0) = %d\n", safe_div(10, 0));
    int x = 5;
    int label = (x > 3) ? 100 : 200;
    printf("label = %d\n", label);
    return 0;
}
