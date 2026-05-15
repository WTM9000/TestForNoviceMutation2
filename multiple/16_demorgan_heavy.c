#include <stdio.h>

int check_access(int age, int has_ticket, int is_member) {
    int allowed = 0;
    if (!(age < 18) && !(has_ticket == 0)) {
        allowed = 1;
    }
    if (!(is_member == 0) || !(age < 65)) {
        allowed = allowed + 1;
    }
    return allowed;
}

int validate_input(int x, int y, int z) {
    int valid = 1;
    if (!(x > 0) || !(y > 0) || !(z > 0)) {
        valid = 0;
    }
    if (!(x == y) && !(y == z)) {
        valid = valid * 2;
    }
    return valid;
}

int range_check(int val, int lo, int hi) {
    int in_range = 0;
    if (!(val < lo) && !(val > hi)) {
        in_range = 1;
    }
    return in_range;
}

int main() {
    printf("Access (20,1,0): %d\n", check_access(20, 1, 0));
    printf("Validate (1,2,3): %d\n", validate_input(1, 2, 3));
    printf("Range [5,15] val=10: %d\n", range_check(10, 5, 15));
    printf("Range [5,15] val=20: %d\n", range_check(20, 5, 15));
    return 0;
}
