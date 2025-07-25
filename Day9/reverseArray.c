#include <stdio.h>

void reversePairs(int arr[], int n) {
    printf("Reversed pairs:\n");
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n)
            printf("[%d, %d]\n", arr[i + 1], arr[i]);
        else
            printf("[%d]\n", arr[i]); 
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    reversePairs(arr, n);
    return 0;
}