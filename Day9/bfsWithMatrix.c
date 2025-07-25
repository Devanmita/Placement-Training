#include <stdio.h>
#define MAX 100

int queue[MAX], front = -1, rear = -1;
int visited[MAX];

void enqueue(int v) {
    if (rear < MAX - 1)
        queue[++rear] = v;
}

int dequeue() {
    if (front < rear)
        return queue[++front];
    return -1;
}

void bfs(int graph[MAX][MAX], int n, int start) {
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    enqueue(start);
    visited[start] = 1;

    printf("BFS Traversal: ");
    while (front < rear) {
        int v = dequeue();
        printf("%d ", v);

        for (int i = 0; i < n; i++) {
            if (graph[v][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main() {
    int n = 7;
    int graph[MAX][MAX] = {
        {0, 0, 0, 1, 1, 0, 0},
        {0, 0, 1, 0, 0, 0, 0},
        {0, 1, 0, 1, 1, 0, 0}, 
        {1, 0, 1, 0, 0, 1, 0}, 
        {1, 0, 1, 0, 0, 1, 1}, 
        {0, 0, 0, 1, 0, 0, 1},
        {0, 0, 0, 0, 1, 1, 0}
    };

    int start = 0;
    bfs(graph, n, start);
    return 0;
}