/* test02 - Fallback: no initialized variables exist before any statement.
 * Expected: conditionFromScope = false, loopCondition from FALLBACK_CONDITIONS
 * (e.g. "1" or "0 == 0").                                     */
void no_locals(int a, int b) {
    a + b;
    while ((5 >= 5) || (0 > 1)) {
        if ((5 >= 5) || (0 > 1)) break;
    }
}
