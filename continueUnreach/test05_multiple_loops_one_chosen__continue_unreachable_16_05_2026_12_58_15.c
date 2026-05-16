/* test05 - Three loops in one function; one is chosen at random.
 * All three have Variant A available (x declared before the first loop).
 * Expected: exactly one loop gets continue + dead expr. */
int multi_loop(int a, int b) {
    int x = a + b;
    while (a > 0) {
        a--;
    }
    for (int i = 0; i < b; i++) {
        x = x + i;
        continue;
        x;
    }
    do {
        b--;
    } while (b > 0);
    return x;
}
