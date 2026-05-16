/* test01 - while loop, Variant A: initialized variable declared before the loop.
 * Expected: deadExpression = "x", expressionFromScope = true.
 * Inserted after last stmt "a--":
 *     continue;
 *     x;                                                       */
int process(int a, int b) {
    int x = a + b;
    while (a > 0) {
        if (b > 0) x = 0;
        a--;
    }
    return x;
}
