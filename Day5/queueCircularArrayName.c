        #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50

struct Person {
    char name[50];
    char profession[50];
    int age[20];
    int salary[50];
    int spent[20];

};

struct Person queue[N];
int front = -1;
int rear = -1;

void enqueue() {
    struct Person temp;

    printf("Enter Name: ");
    scanf(" %[^\n]", temp.name);

    printf("Enter Profession: ");
    scanf(" %[^\n]", temp.profession);

    printf("Enter Age: ");
    scanf(" %[^\n]", temp.age);

    printf("Enter Salary: ");
    scanf(" %[^\n]", temp.salary);

    printf("Enter Expendicture: ");
    scanf(" %[^\n]", temp.spent);

    if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = temp;
    } else if ((rear + 1) % N == front) {
        printf("Queue is full\n");
    } else {
        rear = (rear + 1) % N;
        queue[rear] = temp;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("\nQueue is underflow..\n");
    } else if (front == rear) {
        printf("\nDequeued Person:\nName: %s\nProfession: %s\nAge: %d\nSalary: %d\nExpendicture: %d\n", queue[front].name, queue[front].profession,queue[front].age,queue[front].salary,queue[front].spent);
        front = rear = -1;
    } else {
        printf("\nDequeued Person:\nName: %s\nProfession: %s\nAge: %d\nSalary: %d\nExpendicture: %d\n", queue[front].name, queue[front].profession,queue[front].age,queue[front].salary,queue[front].spent);
        front = (front + 1) % N;
    }
}

void display() {
    int i = front;
    if (front == -1 && rear == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("\n--- Queue Contents ---\n");
        while (i != rear) {
            printf("Name: %s\nProfession: %s\nAge: %d\nSalary: %d\nExpendicture: %d\n\n", queue[i].name, queue[i].profession,queue[i].age,queue[i].salary,queue[i].spent);
            i = (i + 1) % N;
        }
         printf("Name: %s\nProfession: %s\nAge: %d\nSalary: %d\nExpendicture: %d\n\n", queue[i].name, queue[i].profession,queue[i].age,queue[i].salary,queue[i].spent);
    }
}

void peek() {
    if (front == -1 && rear == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("\nFront Person:\nName: %s\nProfession: %s\nAge: %d\nSalary: %d\nExpendicture: %d\n\n", queue[front].name, queue[front].profession,queue[front].age,queue[front].salary,queue[front].spent);
    }
}

int main() {
    int ch;

    while (1) {
        printf("\n*** Queue Menu ***");
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Peek\n5. Exit");
        printf("\n\nEnter your choice (1-5): ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit(0);
            default:
                printf("\nWrong Choice!!");
        }
    }
}