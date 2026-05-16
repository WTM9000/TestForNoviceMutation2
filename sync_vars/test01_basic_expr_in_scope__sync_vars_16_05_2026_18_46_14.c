/* test01 - Variant A: binary expression with two identifiers exists in scope.
 * Expected: syncExpression = "a + b", expressionFromScope = true */
int compute(int a, int b) {
    int result = a + b;
    int _sv_x = a + b;
    int _sv_y = a + b;
    if (_sv_x == _sv_y) {
        return result;
    }
}
