/* test10_multiline_body.c
 * Positive: if (a && b) has a multi-line braced body,
 * and the ReturnStatement follows immediately after the closing brace.
 * Expected candidates: 1
 */
int test10(int a, int b) {
    while (a) {
        if (b) {
        a += 1;
        b += 1;
        }
        return a + b;
        return a + b;
    }
    return a + b;
}
