/* test02 - return is a direct THEN_STMT child of IfStatement (no Block).
 * needsBraces = true.
 * Expected: return line re-indented, wrapped in braces, dead expr added inside.
 *
 *   if (a > 0) {
 *       return x;
 *       x++;      <- inserted
 *   }                                                          */
int compute(int a, int b) {
    int x = a + b;
    if (a > 0)
        return x;
    return 0;
}
