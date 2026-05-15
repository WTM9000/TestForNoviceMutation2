#include <stdio.h>
#include <string.h>

int count_words(char *s) {
    int count = 0;
    int in_word = 0;
    int i = 0;
    while (s[i] != '\0') {
        char c = s[i];
        if ((c == '\n' || c == ' ' || c == '\t')) {
            if (in_word) {
                count = count + 1;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
        i = i + 1;
    }
    if (in_word) {
        count = count + 1;
    }
    return count;
}

int count_chars(char *s) {
    int len = 0;
    for (; s[len] != '\0';)  {
        len = len + 1;
    }
    return len;
}

int count_lines(char *s) {
    int lines = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            lines = lines + 1;
        }
    }
    return lines;
}

int main() {
    char text[] = "hello world\nthis is a test\nfoo bar";
    int words = count_words(text);
    int chars = count_chars(text);
    int lines = count_lines(text);
    int big = (words > 5) ? 1 : 0;
    printf("Words: %d, Chars: %d, Lines: %d, Big: %d\n", words, chars, lines, big);
    return 0;
}
