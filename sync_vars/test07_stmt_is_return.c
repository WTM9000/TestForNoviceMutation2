/* test07 - Sole statement is a return.
 * If Joern tags "return x" as ExpressionStatement: it becomes a candidate and wrapping
 * preserves behaviour (condition always true).
 * If Joern does NOT tag it as ExpressionStatement: 0 candidates — document this. */
int identity(int x) {
    return x;
}
