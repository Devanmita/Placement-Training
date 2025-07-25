#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50

struct Person {
    char name[50];
    char relation[50];
};

struct Person queue[N];
int front = -1;
int rear = -1;

void enqueue() {
    struct Person p;
    if (rear == N - 1) {
        printf("Queue is Full!\n");
        return;
    }

    printf("Enter Name: ");
    scanf("%s", p.name);
    printf("Enter Relation: ");
    scanf("%s", p.relation);

    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = p;
    printf("Person Enqueued Successfully!\n");
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is Empty!\n");
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is Empty!\n");
    } else {
        printf("Queue contents:\n");
        for (int i = front; i <= rear; i++) {
            printf("Name: %s, Relation: %s\n", queue[i].name, queue[i].relation);
        }
    }
}

void peek() {
    if (front == -1 && rear == -1) {
        printf("Queue is Empty!\n");
    } else {
        printf("Front Element -> Name: %s, Relation: %s\n", queue[front].name, queue[front].relation);
    }
}

int main() {
    int ch;

    while (1) {
        printf("\n*** Queue Menu ***\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: peek(); break;
            case 5: exit(0);
            default: printf("Wrong Choice!!\n");
        }
    }
    return 0;
}  