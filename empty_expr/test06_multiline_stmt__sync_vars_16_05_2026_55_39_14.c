/* test06 - Statement spans multiple lines (startLine != endLine).
 * The dead expression must be inserted after endLine, not startLine.
 * Expected: dead line appears after the closing part of the multi-line statement. */
int multiline(int a, int b, int c) {
    int x = a + b;
    int y = x
            + c;
    int mutated_x = 3 + 5;
    int mutated_y = 3 + 5;
    if (mutated_x == mutated_y) {
        return y;
    }
}
