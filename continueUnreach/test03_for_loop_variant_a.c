/* test03 - for loop (LoopStatement label), Variant A available.
 * Expected: continue + dead expr inserted after last stmt in the for body. */
int sum(int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = result + i;
    }
    return result;
}
