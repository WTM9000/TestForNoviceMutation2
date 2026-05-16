/* test03 - Fallback: the only variable is declared AFTER the chosen statement.
 * Filter "decl.startLine < stmtLine" excludes it -> fallback used.
 * Expected: if "return x" (line 4) is chosen, "x" (line 5) is not yet declared
 * -> conditionFromScope = false.
 * Note: "return x" may not be a STATEMENTS child depending on Joern version. */
int late_decl(int a) {
    return a;
    int x = a + 1;
}
