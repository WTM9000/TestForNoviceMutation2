/* test06 - Three return statements across two functions; one chosen at random.
 * All are inside braced blocks, Variant A available in both functions.
 * Expected: exactly one return gets a dead expr inserted after it.     */
int add(int a, int b) {
    int x = a + b;
    if (x > 0) {
        return x;
    }
    return 0;
}

int sub(int a, int b) {
    int y = a - b;
    return y;
}
