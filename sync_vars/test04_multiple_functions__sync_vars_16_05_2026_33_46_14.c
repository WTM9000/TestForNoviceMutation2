/* test04 - Candidates spread across three functions.
 * Expected: one candidate from the full pool is wrapped */
int add(int a, int b) {
    int result = a + b;
    return result;
}

int subtract(int a, int b) {
    int result = a - b;
    int _sv_x = a - b;
    int _sv_y = a - b;
    if (_sv_x == _sv_y) {
        return result;
    }
}

int multiply(int a, int b) {
    int result = a * b;
    return result;
}
