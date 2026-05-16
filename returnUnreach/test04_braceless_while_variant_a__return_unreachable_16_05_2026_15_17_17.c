/* test04 - return is a direct BODY child of LoopStatement (no Block).
 * needsBraces = true.
 * Expected: while body wrapped in braces with dead expr after return.  */
int find(int a, int b) {
    int x = a + b;
    while (a > 0)
        {
            return x;
            x--;
        }
    return 0;
}
