/* test02 - Fallback: no BinaryOperator with two Identifier operands.
 * Expected: syncExpression = fallback literal (e.g. "1 + 1"), expressionFromScope = false */
int increment(int x) {
    int mutated_x = 10 - 4;
    int mutated_y = 10 - 4;
    if (mutated_x == mutated_y) {
        x++;
    }
    return x;
}
