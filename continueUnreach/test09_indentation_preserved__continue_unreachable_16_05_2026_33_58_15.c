/* test09 - Verifies that continue and dead expr inherit indentation from the
 * last statement of the loop body.
 * Expected: both inserted lines use the same leading whitespace as "a--". */
int indented(int a, int b) {
    int x = a + b;
    while (a > 0) {
        a--;
        continue;
        x;
    }
    return x;
}
