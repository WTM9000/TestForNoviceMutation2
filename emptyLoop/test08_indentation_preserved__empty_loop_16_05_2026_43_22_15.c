/* test08 - Verifies that the inserted while-loop inherits the indentation
 * of the statement it follows, and inner if uses one extra indent level.
 * Expected:
 *     while (x) {
 *         if (x) break;
 *     }                                                        */
int indented(int a, int b) {
    int x = a + b;
    while (0 == 0) {
        if (0 == 0) break;
    }
    int y = a * b;
    return x + y;
}
