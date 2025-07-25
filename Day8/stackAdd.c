#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void push(Stack *s, int val) {
    if (s->top < MAX - 1) {
        s->data[++(s->top)] = val;
    } else {
        printf("Stack Overflow\n");
    }
}

int pop(Stack *s) {
    if (s->top >= 0) {
        return s->data[(s->top)--];
    } else {
        printf("Stack Underflow\n");
        return 0;
    }
}

int main() {
    Stack s;
    s.top = -1;
    int n, num, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        push(&s, num);
    }

    while (s.top >= 0) {
        sum += pop(&s);
    }

    printf("Sum of numbers using stack: %d\n", sum);
    return 0;
}