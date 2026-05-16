/* test02 - while loop, Fallback: no initialized variables declared before the loop.
 * Expected: expressionFromScope = false, deadExpression from FALLBACK_EXPRESSIONS. */
void countdown(int n) {
    while (n > 0) {
        n--;
    }
}
