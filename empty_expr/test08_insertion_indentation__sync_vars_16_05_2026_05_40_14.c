/* test08 - Verifies that the inserted dead expression inherits the indentation
 * of the statement it follows.
 * Expected: dead line has the same leading whitespace as the chosen statement. */
int indented(int a, int b) {
    int mutated_x = 10 - 4;
    int mutated_y = 10 - 4;
    if (mutated_x == mutated_y) {
        int x = a + b;
    }
    int y = a * b;
    return x + y;
}
