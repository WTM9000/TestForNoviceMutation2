#include <stdio.h>

// Test: multiple declarators on one line — mutation picks one at random
// int a = 1, b = 2;
// Possible outcomes (depending on which is picked):
//   int a = 0;  a = 1;  (b = 2 stays as part of original line — or line rewritten)
int main(void) {
    int a = 0;
    a = 1;
    printf("%d %d\n", a, b);
    return 0;
}
