/* test02 - Fallback: no BinaryOperator with two Identifier operands.
 * Expected: syncExpression = fallback literal (e.g. "1 + 1"), expressionFromScope = false */
int increment(int x) {
    x++;
    return x;
}
