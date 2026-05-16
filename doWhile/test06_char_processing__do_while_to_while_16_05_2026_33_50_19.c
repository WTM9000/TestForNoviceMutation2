#include <stdio.h>
#include <string.h>

/* do-while iterates over characters in a string using an index.
   Represents the idiomatic C string-processing pattern. */
int main(void) {
    const char *str = "hello";
    int idx = 0;

        printf("char[%d] = '%c'\n", idx, str[idx]);
        idx++;
    while (str[idx] != '\0') {
        printf("char[%d] = '%c'\n", idx, str[idx]);
        idx++;
    }

    return 0;
}
