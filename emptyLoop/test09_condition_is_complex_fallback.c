/* test09 - blockId maps to a FALLBACK_CONDITIONS entry that is a complex expression.
 * Expected: loopCondition = e.g. "(1 < 2) && (3 > 1)", both while and if use it.
 * Verify the inserted code compiles and the loop always breaks immediately. */
void only_call(int n) {
    n++;
    n--;
}
