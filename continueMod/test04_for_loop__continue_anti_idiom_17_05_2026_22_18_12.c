#include <stdio.h>

// Test: mutation applies inside a for loop, not only while
int main(void) {
    int scores[] = {45, 60, 75, 90};
    int n = 4;

    for (int i = 0; i < n; i++) {
        int s = scores[i];

        if (!(s < 50)) {
            if (!(s < 75)) {
                printf("distinction\n");
                continue;
            }
            printf("pass\n");
        }
        printf("fail\n");
    }

    return 0;
}
