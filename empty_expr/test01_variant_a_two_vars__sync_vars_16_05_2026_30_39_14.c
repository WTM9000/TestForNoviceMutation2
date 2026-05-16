/* test01 - Variant A: two initialized variables declared before the chosen statement.
 * Expected: deadExpression = "x + y", expressionFromScope = true.
 * Inserted after "int z = x - y;" -> "x + y;" on the next line. */
int compute(int a, int b) {
    int x = a + b;
    int mutated_x = 10 - 4;
    int mutated_y = 10 - 4;
    if (mutated_x == mutated_y) {
        int y = a - b;
    }
    int z = x - y;
    return z;
}
