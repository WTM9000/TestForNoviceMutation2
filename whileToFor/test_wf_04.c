#include <stdio.h>
int hasMore();
int main() {
    while (hasMore()) {
        printf("processing\n");
    }
    return 0;
}
