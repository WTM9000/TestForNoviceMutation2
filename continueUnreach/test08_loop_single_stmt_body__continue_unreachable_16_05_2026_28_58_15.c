/* test08 - Loop body contains exactly one statement (the last stmt = first stmt).
 * Expected: continue + dead expr inserted after that single statement. */
void single_stmt_loop(int n) {
    int x = n + 1;
    while (n > 0) {
        n--;
        continue;
        x;
    }
}
