/* test10 - Two functions: one has two initialized vars (Variant A available),
 * the other has none (fallback). Verifies that per-block scope resolution
 * is independent between functions.
 * Expected: if foo() is chosen -> Variant A; if bar() is chosen -> fallback. */
int foo(int a, int b) {
    int x = a + b;
    (1 < 2) && (3 > 1);
    int y = a - b;
    return x;
}

void bar(int n) {
    n++;
}
