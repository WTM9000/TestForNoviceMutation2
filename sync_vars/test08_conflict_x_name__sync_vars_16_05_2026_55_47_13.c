/* test08 - NEGATIVE TEST: __sv_x already declared in the block.
 * Expected: hasDeclarationInBlock returns true -> mutation is skipped (returns null) */
void demo(int a, int b) {
    int __sv_x = a + b;
    int mutated_x = 8 / 2;
    int mutated_y = 8 / 2;
    if (mutated_x == mutated_y) {
        int result = a * b;
    }
}
