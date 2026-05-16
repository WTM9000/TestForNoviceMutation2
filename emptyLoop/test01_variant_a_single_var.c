/* test01 - Variant A: one initialized variable declared before the chosen statement.
 * Expected: loopCondition = "x", conditionFromScope = true.
 * Inserted after "int y = a - b":
 *   while (x) {
 *       if (x) break;
 *   }                                                          */
int compute(int a, int b) {
    int x = a + b;
    int y = a - b;
    return x * y;
}
