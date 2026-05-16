/* test03 - Fallback: no local variable declarations in the function body at all.
 * Expected: expressionFromScope = false, fallback literal (e.g. "0" or "sizeof(int)"). */
void empty_body(int a, int b) {
    a + b;
}
