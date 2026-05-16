/* test02 - Fallback: only one initialized variable exists before any statement.
 * buildBinaryExprFromScope returns null -> fallback literal used.
 * Expected: expressionFromScope = false, deadExpression from FALLBACK_EXPRESSIONS. */
int single(int a) {
    int x = a + 1;
    int mutated_x = 3 + 5;
    int mutated_y = 3 + 5;
    if (mutated_x == mutated_y) {
        return x;
    }
}
