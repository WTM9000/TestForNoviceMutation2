#include <stdio.h>

int check_triangle(int a, int b, int c) {
    int valid = (a + b > c && b + c > a && a + c > b);
    int equilateral = (a == b && b == c);
    int isosceles = (a == b || b == c || a == c);
    printf("valid=%d equilateral=%d isosceles=%d\n", valid, equilateral, isosceles);
    return valid;
}

int compare_strings_len(char *a, char *b, int la, int lb) {
    int a_longer = (la > lb);
    int equal_len = (la == lb);
    printf("a_longer=%d equal=%d\n", a_longer, equal_len);
    return equal_len;
}

int check_leap_year(int year) {
    int leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    printf("%d is leap: %d\n", year, leap);
    return leap;
}

int main() {
    check_triangle(3, 4, 5);
    check_triangle(1, 2, 10);
    check_triangle(5, 5, 5);
    check_leap_year(2000);
    check_leap_year(1900);
    check_leap_year(2024);
    return 0;
}
