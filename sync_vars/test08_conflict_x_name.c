/* test08 - NEGATIVE TEST: __sv_x already declared in the block.
 * Expected: hasDeclarationInBlock returns true -> mutation is skipped (returns null) */
void demo(int a, int b) {
    int __sv_x = a + b;
    int result = a * b;
}
