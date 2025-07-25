#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[50];
    char relation[100];
    struct Node *next;
};

struct Node *head = NULL;

void create() {
    int i, x;
    printf("How many elements you want to add: ");
    scanf("%d", &x);
    getchar(); // clear the newline after number input

    for (i = 1; i <= x; i++) {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->next = NULL;

        printf("Enter name for node %d: ", i);
        fgets(newNode->name, sizeof(newNode->name), stdin);
        newNode->name[strcspn(newNode->name, "\n")] = '\0'; // Remove newline

        printf("Enter relation for node %d: ", i);
        fgets(newNode->relation, sizeof(newNode->relation), stdin);
        newNode->relation[strcspn(newNode->relation, "\n")] = '\0';

        if (head == NULL) {
            head = newNode;
        } else {
            struct Node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

void display() {
    printf("\nDisplaying Linked List:\n");
    struct Node *temp = head;
    while (temp != NULL) {
        printf("Name: %s, Relation: %s\n", temp->name, temp->relation);
        temp = temp->next;
    }
}

int main() {
    create();
    display();
    return 0;
}