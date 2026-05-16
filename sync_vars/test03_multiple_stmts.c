/* test03 - Multiple candidates in one block.
 * Expected: exactly one of the 5 statements is wrapped, chosen randomly */
void process(int a, int b) {
    int x = a + b;
    int y = a - b;
    int z = x * y;
    x = x + 1;
    y = y - 1;
}
