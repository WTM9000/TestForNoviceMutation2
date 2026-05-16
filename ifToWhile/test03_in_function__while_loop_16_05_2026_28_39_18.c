/* test03_in_function.c
 * Positive: candidate lives in a non-main function.
 * Expected candidates: 1
 */
static int validate(int x, int y) {
    while (x > 0) {
        if (y > 0)
        return x + y;
        return -1;
        return -1;
    }
    return -1;
}

int main(void) {
    return validate(1, 2);
}
