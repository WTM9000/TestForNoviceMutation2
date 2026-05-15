#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top < MAX - 1) {
        top = top + 1;
        stack[top] = val;
    }
}

int pop() {
    int val = (top >= 0) ? stack[top--] : -1;
    return val;
}

int peek() {
    int result = (top >= 0) ? stack[top] : -1;
    return result;
}

int is_empty() {
    int empty = (top == -1) ? 1 : 0;
    return empty;
}

int check_balanced(char *s, int len) {
    top = -1;
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            push((int)c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (is_empty()) {
                return 0;
            }
            int t = pop();
            if (c == ')' && t != '(') return 0;
            if (c == ']' && t != '[') return 0;
            if (c == '}' && t != '{') return 0;
        }
    }
    int balanced;
    if (is_empty()) {
        balanced = 1;
    } else {
        balanced = 0;
    }
    return balanced;
}

int main() {
    push(1);
    push(2);
    push(3);
    printf("Peek: %d\n", peek());
    printf("Pop: %d\n", pop());
    printf("Empty: %d\n", is_empty());
    char expr[] = "{[()]}";
    int ok = check_balanced(expr, 6);
    printf("Balanced: %d\n", ok);
    return 0;
}
