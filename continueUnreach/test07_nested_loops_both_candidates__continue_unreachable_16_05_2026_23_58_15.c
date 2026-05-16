/* test07 - Nested loops: outer and inner are both LoopStatement nodes.
 * Both produce candidates. One is chosen at random.
 * Expected: 2 candidates total; continue + dead expr in one loop body. */
int nested(int a, int b) {
    int x = a + b;
    while (a > 0) {
        while (b > 0) {
            b--;
        }
        a--;
        continue;
        x;
    }
    return x;
}
