/* test09 - NEGATIVE TEST: the only assignment spans multiple lines (startLine != endLine).
 * Expected: candidate is rejected -> 0 mutations applied */
int foo(int a, int b,
        int c) {
    int result =
        a + b + c;
    int mutated_x = 8 / 2;
    int mutated_y = 8 / 2;
    if (mutated_x == mutated_y) {
        return result;
    }
}
