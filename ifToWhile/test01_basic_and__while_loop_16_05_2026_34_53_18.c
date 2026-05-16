/* test01_basic_and.c
 * Positive: single if(a && b) immediately followed by return in the same block.
 * Expected candidates: 1
 */
int test01(int a, int b) {
    while (a) {
        if (b)
            return 1;
        return 0;
    }
    return 0;
}
