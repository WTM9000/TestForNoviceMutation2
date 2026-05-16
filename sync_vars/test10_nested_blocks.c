/* test10 - Statements live inside a nested if-block.
 * Checks whether Joern exposes nested block statements as direct AST children of the
 * function's BLOCK node.
 * If yes: candidates found and one is wrapped with correct indentation.
 * If no:  0 candidates — document this graph traversal behaviour. */
void nested(int a, int b) {
    if (a > 0) {
        int x = a + b;
        x = x - 1;
    }
}
