/* test09 - Function body contains exactly one statement.
 * That statement is the only candidate; dead expression is inserted after it.
 * No vars before it -> fallback.
 * Expected: 1 candidate, fallback expr inserted after "return a". */
int only_return(int a) {
    int mutated_x = 2 * 3;
    int mutated_y = 2 * 3;
    if (mutated_x == mutated_y) {
        return a;
    }
}
