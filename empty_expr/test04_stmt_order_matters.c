/* test04 - Variant A filter: variables must be declared BEFORE the chosen statement.
 * "result" is declared on line 6, after "x" and "y" on lines 4-5.
 * If the chosen stmt is "int x = a + b" (line 4), no vars precede it -> fallback.
 * If the chosen stmt is "int result = x * y" (line 6), both x and y precede it -> Variant A.
 * Expected: demonstrates the startLine < stmtLine filter in action. */
int ordered(int a, int b) {
    int x = a + b;
    int y = a - b;
    int result = x * y;
    return result;
}
