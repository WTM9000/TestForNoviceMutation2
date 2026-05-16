/* test05_nested_blocks.c
 * Positive: candidate is inside a nested Block (the else branch),
 * not at the top level of the function body.
 * Expected candidates: 1
 */
int test05(int a, int b, int flag) {
    if (flag) {
        return 0;
    } else {
        while (a) {
            if (b)
                return 1;
            return 2;
        }
        return 2;
    }
}
