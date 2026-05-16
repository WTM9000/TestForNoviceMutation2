/* test04 - do-while loop (LoopStatement label), Variant A available.
 * Expected: continue + dead expr inserted after last stmt in the do-while body. */
int accumulate(int a, int b) {
    int total = 0;
    do {
        total = total + a;
        a--;
    } while (a > 0);
    return total;
}
