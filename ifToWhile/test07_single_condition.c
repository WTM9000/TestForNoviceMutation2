/* test07_single_condition.c
 * Negative: if condition has no && operator — no ShortCircuitOperator node.
 * Expected candidates: 0
 */
int test07(int a) {
    if (a)
        return 1;
    return 0;
}
