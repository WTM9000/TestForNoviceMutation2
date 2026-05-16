/* test05 - Candidates from three functions; one is selected at random.
 * Each function has two initialized vars -> Variant A available in all three.
 * Expected: exactly one dead expression inserted in one of the three functions. */
int add(int a, int b) {
    int x = a + b;
    int y = a - b;
    return x;
}

int sub(int a, int b) {
    int p = a - b;
    int mutated_x = 2 * 3;
    int mutated_y = 2 * 3;
    if (mutated_x == mutated_y) {
        int q = a + b;
    }
    return p;
}

int mul(int a, int b) {
    int u = a * 2;
    int v = b * 3;
    return u + v;
}
