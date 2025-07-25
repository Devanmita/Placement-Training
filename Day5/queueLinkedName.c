#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Queue {
    char name[50];
    char product[50];
    char issue[100];
    char date[20];
    struct Queue *next;
};

struct Queue *front = NULL;
struct Queue *rear = NULL;

void enqueue() {
    struct Queue *newNode = (struct Queue *)malloc(sizeof(struct Queue));

    printf("Enter Name: ");
    scanf(" %[^\n]", newNode->name);  // space before % to consume newline

    printf("Enter Product Name: ");
    scanf(" %[^\n]", newNode->product);

    printf("Enter Issue: ");
    scanf(" %[^\n]", newNode->issue);

    printf("Enter Date (dd-mm-yyyy): ");
    scanf(" %[^\n]", newNode->date);

    newNode->next = NULL;

    if (front == NULL && rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    struct Queue *temp = front;

    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Dequeued Record:\n");
    printf("Name: %s\n", front->name);
    printf("Product: %s\n", front->product);
    printf("Issue: %s\n", front->issue);
    printf("Date: %s\n", front->date);

    front = front->next;
    free(temp);
}

void peek() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Front Record:\n");
    printf("Name: %s\n", front->name);
    printf("Product: %s\n", front->product);
    printf("Issue: %s\n", front->issue);
    printf("Date: %s\n", front->date);
}

void display() {
    struct Queue *temp = front;
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    printf("All Records in Queue:\n");
    while (temp != NULL) {
        printf("\nName: %s\n", temp->name);
        printf("Product: %s\n", temp->product);
        printf("Issue: %s\n", temp->issue);
        printf("Date: %s\n", temp->date);
        temp = temp->next;
    }
}

int main() {
    int opt;

    while (1) {
        printf("\nChoose Operation:\n");
        printf("1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Peek \n");
        printf("4. Display All Records\n");
        printf("5. Exit\n");

        scanf("%d", &opt);

        switch (opt) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Option.\n");
        }
    }

    return 0;
}