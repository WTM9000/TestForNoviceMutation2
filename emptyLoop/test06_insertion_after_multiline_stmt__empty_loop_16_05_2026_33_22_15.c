/* test06 - Statement spans multiple lines; loop must be inserted after endLine.
 * Expected: the while-block appears after the closing line of the multi-line stmt. */
int multiline(int a, int b, int c) {
    int x = a + b;
    while (1) {
        if (1) break;
    }
    int y = x
            + c;
    return y;
}
