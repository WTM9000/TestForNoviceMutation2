#include <stdio.h>
int hasMore();
int main() {
    for (; hasMore();)  {
        printf("processing\n");
    }
    return 0;
}
