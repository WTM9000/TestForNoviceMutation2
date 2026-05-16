/* test06 - Variable declared INSIDE the loop body.
 * findInitializedVarBefore looks in fnBlock (enclosing function body),
 * not inside the loop itself. Variable "inner" is not in fnBlock -> fallback.
 * Expected: expressionFromScope = false. */
void inner_decl(int n) {
    while (n > 0) {
        int inner = n * 2;
        n--;
        continue;
        (5 >= 5) || (0 > 1);
    }
}
