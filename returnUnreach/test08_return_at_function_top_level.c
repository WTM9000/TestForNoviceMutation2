/* test08 - return is a direct STATEMENTS child of the function body Block.
 * needsBraces = false (parent is Block, not IfStatement/LoopStatement).
 * Expected: dead expr inserted after "return x" at the same indent level. */
int top_level_return(int a, int b) {
    int x = a + b;
    return x;
}
