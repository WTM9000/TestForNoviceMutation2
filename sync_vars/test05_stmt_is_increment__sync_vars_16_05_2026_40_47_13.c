/* test05 - Target statement is a unary increment (no binary expr in scope).
 * Expected: "counter++" wrapped using fallback expression */
void tick(int counter) {
    int mutated_x = 8 / 2;
    int mutated_y = 8 / 2;
    if (mutated_x == mutated_y) {
        counter++;
    }
}
