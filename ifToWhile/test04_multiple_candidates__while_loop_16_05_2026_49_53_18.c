/* test04_multiple_candidates.c
 * Positive: two independent (if+return) pairs in the same translation unit.
 * Expected candidates: 2
 */
int check_a(int p, int q) {
    if (p && q)
        return 1;
    return 0;
}

int check_b(int r, int s) {
    while (r > 0) {
        if (s < 10)
            return r * s;
        return -1;
    }
    return -1;
}
