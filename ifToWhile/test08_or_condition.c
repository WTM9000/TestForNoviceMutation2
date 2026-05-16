/* test08_or_condition.c
 * Negative: condition uses || (ShortCircuitOperator with operatorCode "||"),
 * not && — query filters operatorCode = "&&".
 * Expected candidates: 0
 */
int test08(int a, int b) {
    if (a || b)
        return 1;
    return 0;
}
