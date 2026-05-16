/* test02 - Fallback: no BinaryOperator with two Identifier operands.
 * Expected: syncExpression = fallback literal (e.g. "1 + 1"), expressionFromScope = false */
int increment(int x) {
    x++;
    int _sv_x = 2 * 3;
    int _sv_y = 2 * 3;
    if (_sv_x == _sv_y) {
        return x;
    }
}
