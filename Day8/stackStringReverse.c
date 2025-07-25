#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char data[MAX];
    int top;
} Stack;

void push(Stack *s, char ch) {
    if (s->top < MAX - 1)
        s->data[++(s->top)] = ch;
}

char pop(Stack *s) {
    if (s->top >= 0)
        return s->data[(s->top)--];
    return '\0';
}

int main() {
    char str[MAX], rev[MAX];
    Stack s;
    s.top = -1;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    int len = strlen(str);
    for (int i = 0; i < len; i++)
        push(&s, str[i]);

    for (int i = 0; i < len; i++)
        rev[i] = pop(&s);
    rev[len] = '\0';

    printf("Reversed string: %s\n", rev);
    return 0;
}