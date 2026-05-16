/* test02_chained_and.c
 * Positive: if (a && b && c) — LHS="a", RHS="b && c".
 * The CPG represents chained && left-associatively:
 * ShortCircuitOperator(LHS=(a&&b), RHS=c) or (LHS=a, RHS=(b&&c)).
 * Either way one ShortCircuitOperator is the direct CONDITION child.
 * Expected candidates: 1
 */
int test02(int a, int b, int c) {
    if (a && b && c)
        return 42;
    return 0;
}
