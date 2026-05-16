/* test03 - Multiple candidates in one block.
 * Expected: exactly one of the 5 statements is wrapped, chosen randomly */
void process(int a, int b) {
    int x = a + b;
    int y = a - b;
    int z = x * y;
    x = x + 1;
    int mutated_x = 1 + 1;
    int mutated_y = 1 + 1;
    if (mutated_x == mutated_y) {
        y = y - 1;
    }
}
