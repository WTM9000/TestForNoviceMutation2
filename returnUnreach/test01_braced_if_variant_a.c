/* test01 - return inside braced if-body, Variant A available.
 * needsBraces = false (parent Block exists between IfStatement and ReturnStatement).
 * Expected: dead expr inserted as new line after "return x;", same indent.
 *
 *   if (a > 0) {
 *       return x;
 *       x++;      <- inserted
 *   }                                                          */
int compute(int a, int b) {
    int x = a + b;
    if (a > 0) {
        return x;
    }
    return 0;
}
