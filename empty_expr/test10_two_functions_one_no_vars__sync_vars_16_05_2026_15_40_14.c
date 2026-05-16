/* test10 - Two functions: one has two initialized vars (Variant A available),
 * the other has none (fallback). Verifies that per-block scope resolution
 * is independent between functions.
 * Expected: if foo() is chosen -> Variant A; if bar() is chosen -> fallback. */
int foo(int a, int b) {
    int x = a + b;
    int y = a - b;
    int mutated_x = 8 / 2;
    int mutated_y = 8 / 2;
    if (mutated_x == mutated_y) {
        return x;
    }
}

void bar(int n) {
    n++;
}
