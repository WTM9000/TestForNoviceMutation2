/* test10 - NEGATIVE TEST: no loops in the translation unit at all.
 * Expected: findAllCandidates() returns empty list -> mutation skipped (returns null). */
int add(int a, int b) {
    return a + b;
}

void noop(int x) {
    x = x + 1;
}
