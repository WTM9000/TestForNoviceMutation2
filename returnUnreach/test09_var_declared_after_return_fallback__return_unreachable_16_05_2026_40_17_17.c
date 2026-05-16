/* test09 - The only local variable is declared AFTER the return statement.
 * findInitializedVarBefore uses decl.startLine < retStart -> var excluded.
 * Expected: expressionFromScope = false, fallback used.                */
int late_var(int a) {
    return a;
    0;
    int x = a + 1;
}
