#include <stdio.h>
#include <string.h>

int is_palindrome(char *s, int len) {
    int flag = 0;
    int left = 0;
    int right = len - 1;
    if (left < right) flag = 1;
    else flag = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            flag = 0;
            break;
        }
        left = left + 1;
        right = right - 1;
    }
    return flag;
}

int count_vowels(char *s, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count = count + 1;
        } else {
            if (c == 'A') {
                count = count + 1;
            } else {
                if (c == 'E') {
                    count = count + 1;
                } else {
                    if (c == 'I') {
                        count = count + 1;
                    } else {
                        if (c == 'O') {
                            count = count + 1;
                        } else {
                            if (c == 'U') {
                                count = count + 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    char word[] = "racecar";
    int len = strlen(word);
    int is_pal = is_palindrome(word, len);
    printf("%s is palindrome: %d\n", word, is_pal);
    printf("Vowels: %d\n", count_vowels(word, len));
    return 0;
}
