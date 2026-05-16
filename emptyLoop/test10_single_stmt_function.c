/* test10 - Function body has exactly one statement and no local variables.
 * That statement is the only candidate; fallback condition used.
 * Expected: 1 candidate, empty loop inserted after the single statement. */
int identity(int a) {
    return a;
}
