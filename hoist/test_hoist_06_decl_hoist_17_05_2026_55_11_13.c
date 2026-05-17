#include <stdio.h>

int foo() {
    int a = 1;
    printf("foo\n");
    return a;
}

int bar() {
    printf("bar\n");
    int b = 2;
    return b;
}

int main() {
    printf("%d %d\n", foo(), bar());
    return 0;
}
