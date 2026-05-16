/* test01 - Variant A: binary expression with two identifiers exists in scope.
 * Expected: syncExpression = "a + b", expressionFromScope = true */
int compute(int a, int b) {
    int mutated_x = 8 / 2;
    int mutated_y = 8 / 2;
    if (mutated_x == mutated_y) {
        int result = a + b;
    }
    return result;
}
