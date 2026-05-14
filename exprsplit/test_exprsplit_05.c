#include <stdio.h>

int main() {
    int flags = 0xFF, mask = 0x0F;
    int masked = flags & mask;
    printf("%d\n", masked);
    return 0;
}
