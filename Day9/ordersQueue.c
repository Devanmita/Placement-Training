#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int order_id;
    char customer_name[50];
} Order;

typedef struct {
    Order orders[MAX];
    int front, rear;
} Queue;

void enqueue(Queue *q, Order o) {
    if (q->rear < MAX - 1) {
        q->orders[++(q->rear)] = o;
    }
}

Order dequeue(Queue *q) {
    if (q->front < q->rear)
        return q->orders[++(q->front)];
    Order empty = {0, ""};
    return empty;
}

int main() {
    int n;
    Queue q;
    q.front = -1;
    q.rear = -1;

    printf("Enter number of orders: ");
    scanf("%d", &n);
    printf("Enter orders (order_id customer_name):\n");
    for (int i = 0; i < n; i++) {
        Order o;
        scanf("%d %s", &o.order_id, o.customer_name);
        enqueue(&q, o);
    }

    for (int i = 0; i < n; i++) {
        Order o = dequeue(&q);
        printf("Order #%d processed\n", o.order_id);
    }

    return 0;
}