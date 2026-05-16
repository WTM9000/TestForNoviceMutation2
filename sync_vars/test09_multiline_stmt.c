/* test09 - NEGATIVE TEST: the only assignment spans multiple lines (startLine != endLine).
 * Expected: candidate is rejected -> 0 mutations applied */
int foo(int a, int b,
        int c) {
    int result =
        a + b + c;
    return result;
}
