/* test01 - Variant A: binary expression with two identifiers exists in scope.
 * Expected: syncExpression = "a + b", expressionFromScope = true */
int compute(int a, int b) {
    int result = a + b;
    return result;
}
