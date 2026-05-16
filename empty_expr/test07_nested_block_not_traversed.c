/* test07 - Statements inside a nested if-block are NOT direct STATEMENTS children
 * of the function body Block (per CPG graph spec).
 * Only top-level statements of the function body are candidates.
 * Expected: candidates = top-level statements only (int x, int y, return y).
 * The statement inside the if-body is NOT a candidate. */
int with_nested(int a, int b) {
    int x = a + b;
    int y = a - b;
    if (a > 0) {
        int inner = x + y;
    }
    return y;
}
