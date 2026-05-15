#include <stdio.h>

int classify_bmi(double bmi) {
    int cat = 0;
    if (bmi >= 18.5 && bmi < 25.0) {
        cat = 1;
    } else if (bmi >= 25.0 && bmi < 30.0) {
        cat = 2;
    } else if (bmi >= 30.0) {
        cat = 3;
    }
    return cat;
}

int is_valid_date(int day, int month, int year) {
    int valid = 1;
    if (month < 1 || month > 12) {
        valid = 0;
    }
    if (day > 31) {
        valid = 0;
    } else {
        if (day < 1) {
            valid = 0;
        }
    }
    if (year < 1 || year > 9999) {
        valid = 0;
    }
    if (month == 2 && day > 29) {
        valid = 0;
    }
    return valid;
}

int password_ok(char *pw, int len) {
    int has_upper = 0;
    int has_digit = 0;
    int long_enough = (len >= 8) ? 1 : 0;
    int i = 0;
    for (; i < len;)  {
        if (pw[i] >= 'A' && pw[i] <= 'Z') has_upper = 1;
        if (pw[i] >= '0' && pw[i] <= '9') has_digit = 1;
         i++;
         }
    double ok;
    if (has_upper && has_digit && long_enough) {
        ok = 1;
    } else {
        ok = 0;
    }
    return ok;
}

int main() {
    printf("BMI 22.0: cat=%d\n", classify_bmi(22.0));
    printf("BMI 27.5: cat=%d\n", classify_bmi(27.5));
    printf("Date 29/2/2023 valid: %d\n", is_valid_date(29, 2, 2023));
    char pw[] = "Hello123";
    printf("Password ok: %d\n", password_ok(pw, 8));
    return 0;
}
