/* test04 - Candidates spread across three functions.
 * Expected: one candidate from the full pool is wrapped */
int add(int a, int b) {
    int result = a + b;
    return result;
}

int subtract(int a, int b) {
    int mutated_x = 2 * 3;
    int mutated_y = 2 * 3;
    if (mutated_x == mutated_y) {
        int result = a - b;
    }
    return result;
}

int multiply(int a, int b) {
    int result = a * b;
    return result;
}
