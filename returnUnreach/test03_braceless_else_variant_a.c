/* test03 - return is a direct ELSE_STMT child of IfStatement (no Block).
 * needsBraces = true.
 * Expected: else-branch wrapped in braces with dead expr inside.       */
int sign(int a) {
    int x = a * 2;
    if (a > 0)
        return 1;
    else
        return -1;
}
