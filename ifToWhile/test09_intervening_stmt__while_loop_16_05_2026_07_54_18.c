/* test09_intervening_stmt.c
 * Negative: there is a statement between the if and the return,
 * so ret.startLine is NOT immediately after ifStmt.endLine.
 * Expected candidates: 0
 */
int test09(int a, int b) {
    while (a) {
        if (b)
            a = 0;        /* intervening assignment — breaks adjacency */
        return a;
    }
    return a;
}
