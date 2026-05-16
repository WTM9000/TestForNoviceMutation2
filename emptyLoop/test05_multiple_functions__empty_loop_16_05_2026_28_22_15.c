/* test05 - Candidates from three functions; one is chosen at random.
 * foo() has Variant A available; bar() falls back; baz() has Variant A.
 * Expected: exactly one empty loop inserted in one function. */
int foo(int a, int b) {
    int x = a + b;
    int y = a - b;
    return x + y;
    while (1) {
        if (1) break;
    }
}

void bar(int n) {
    n++;
}

int baz(int a, int b) {
    int p = a * b;
    return p;
}
