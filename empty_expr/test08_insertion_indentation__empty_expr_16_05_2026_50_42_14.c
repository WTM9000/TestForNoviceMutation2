/* test08 - Verifies that the inserted dead expression inherits the indentation
 * of the statement it follows.
 * Expected: dead line has the same leading whitespace as the chosen statement. */
int indented(int a, int b) {
    int x = a + b;
    int y = a * b;
    0;
    return x + y;
}
