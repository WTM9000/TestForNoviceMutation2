/* test05 - Target statement is a unary increment (no binary expr in scope).
 * Expected: "counter++" wrapped using fallback expression */
void tick(int counter) {
    counter++;
}
