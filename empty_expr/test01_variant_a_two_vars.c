/* test01 - Variant A: two initialized variables declared before the chosen statement.
 * Expected: deadExpression = "x + y", expressionFromScope = true.
 * Inserted after "int z = x - y;" -> "x + y;" on the next line. */
int compute(int a, int b) {
    int x = a + b;
    int y = a - b;
    int z = x - y;
    return z;
}
