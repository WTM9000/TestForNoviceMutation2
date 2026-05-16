/* test07 - return inside a doubly-nested braced block.
 * Graph traversal uses BODY*1.. so this return IS found.
 * needsBraces = false (innermost parent is Block).
 * Expected: dead expr inserted after "return result" with matching indent. */
int nested(int a, int b) {
    int result = a + b;
    if (a > 0) {
        if (b > 0) {
            return result;
        }
    }
    return 0;
}
