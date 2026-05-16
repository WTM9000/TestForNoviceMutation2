/* test10 - NEGATIVE TEST: no ReturnStatement nodes with non-null code field.
 * Expected: findAllCandidates() returns empty list -> mutation skipped. */
void only_void(int a, int b) {
    a = a + b;
    b = a - b;
}
