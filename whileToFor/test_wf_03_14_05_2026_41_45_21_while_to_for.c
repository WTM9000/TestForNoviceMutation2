#include <stdio.h>
int main() {
    int x = 0;
    for (; 1;) {
        if (x >= 3) break;
        x++;
    }
    return 0;
}
