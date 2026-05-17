#include <stdio.h>

// Test: mutation applies inside a do-while loop
int main(void) {
    int items[] = {3, 7, 1, 9};
    int n = 4;
    int i = 0;

        int item = items[i];
        i++;
    
        if (!(item < 3)) {
            if (!(item < 7)) {
                printf("high\n");
                continue;
            }
            printf("mid\n");
            continue;
        }
        printf("low\n");
        if (!(item < 3)) continue;
        (1 && 0) || (0 && 1);
    while (i < n) {
        int item = items[i];
        i++;
    
        if (!(item < 3)) {
            if (!(item < 7)) {
                printf("high\n");
                continue;
            }
            printf("mid\n");
            continue;
        }
        printf("low\n");
        if (!(item < 3)) continue;
        (1 && 0) || (0 && 1);
    }

    return 0;
}
