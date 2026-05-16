/* test04 - Multiple initialized variables before the chosen statement.
 * findInitializedVarBefore returns only the earliest one (ORDER BY startLine LIMIT 1).
 * Expected: loopCondition = "x" (declared first), not "y" or "z". */
int multi_vars(int a, int b) {
    int x = a + b;
    int y = a - b;
    int z = x * y;
    return z;
}
