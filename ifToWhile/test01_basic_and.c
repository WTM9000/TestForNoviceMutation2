/* test01_basic_and.c
 * Positive: single if(a && b) immediately followed by return in the same block.
 * Expected candidates: 1
 */
int test01(int a, int b) {
    if (a && b)
        return 1;
    return 0;
}
