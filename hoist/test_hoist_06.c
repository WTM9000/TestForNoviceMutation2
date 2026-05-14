#include <stdio.h>

int foo() {
    printf("foo\n");
    int a = 1;
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
