#include <stdio.h>
int main() {
    int mutated_var = 0;
    while (mutated_var < 5) {
        printf("%d\n", mutated_var);
        mutated_var++;
    }
    return 0;
}
