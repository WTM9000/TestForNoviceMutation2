/* test08 - Verifies that the inserted dead expression inherits the indentation
 * of the statement it follows.
 * Expected: dead line has the same leading whitespace as the chosen statement. */
int indented(int a, int b) {
    int x = a + b;
    (1 < 2) && (3 > 1);
    int y = a * b;
    return x + y;
}
