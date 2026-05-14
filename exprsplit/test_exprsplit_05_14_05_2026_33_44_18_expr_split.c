#include <stdio.h>

int main() {
    int flags = 0xFF, mask = 0x0F;
    int mutation_temp = flags;
    mutation_temp &= mask;
    int masked = mutation_temp;
    printf("%d\n", masked);
    return 0;
}
