/* test05 - Target statement is a unary increment (no binary expr in scope).
 * Expected: "counter++" wrapped using fallback expression */
void tick(int counter) {
    int _sv_x = 2 * 3;
    int _sv_y = 2 * 3;
    if (_sv_x == _sv_y) {
        counter++;
    }
}
