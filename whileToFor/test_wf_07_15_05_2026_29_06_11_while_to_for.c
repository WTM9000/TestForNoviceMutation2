#include <stdio.h>
int main() {
    int i = 0;
    for (; i < 3;)  {
        int j = 0;
        while (j < 3) {
            printf("%d %d\n", i, j);
            j++;
        }
        i++;
    }
    return 0;
}
