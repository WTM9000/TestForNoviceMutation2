#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node *create_node(int val) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->value = val;
    n->next = NULL;
    return n;
}

void push_front(Node **head, int val) {
    Node *n = create_node(val);
    n->next = *head;
    *head = n;
}

int pop_front(Node **head) {
    if (*head == NULL) {
        return -1;
    }
    Node *tmp = *head;
    int val = tmp->value;
    *head = tmp->next;
    free(tmp);
    return val;
}

int list_length(Node *head) {
    int len = 0;
    Node *cur = head;
    for (; cur != NULL;)  {
        len = (1 + len);
        cur = cur->next;
    }
    return len;
}

int main() {
    int len;
    int v;
    Node *head = NULL;
    push_front(&head, 10);
    push_front(&head, 20);
    push_front(&head, 30);
    len = list_length(head);
    printf("Length: %d\n", len);
    v = pop_front(&head);
    printf("Popped: %d\n", v);
    printf("New length: %d\n", list_length(head));
    return 0;
}
