/* test07 - Statements inside a nested if-block are NOT direct STATEMENTS children
 * of the function body Block (CPG graph spec).
 * Only top-level statements are candidates.
 * Expected: "int inner = x + y" inside the if-body is NOT a candidate. */
int with_nested(int a, int b) {
    int x = a + b;
    int y = a - b;
    if (a > 0) {
        int inner = x + y;
    }
    return y;
}
