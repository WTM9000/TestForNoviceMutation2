/* test06_no_return_after.c
 * Negative: if (a && b) exists but the next statement is an assignment,
 * not a ReturnStatement — no adjacent ReturnStatement.
 * Expected candidates: 0
 */
int test06(int a, int b) {
    int result = 0;
    if (a && b)
        result = 1;
    result += 10;
    return result;
}
