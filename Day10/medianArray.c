#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main() {
    int n1, n2;
    printf("\nEnter size of Array 1: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for Array 1:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of Array 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for Array 2:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int totalCount = n1 + n2;
    int combined[totalCount];

    printf("Array 1: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
        combined[i] = arr1[i];
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
        combined[n1 + i] = arr2[i];
    }
    printf("\n");

    sort(combined, totalCount);

    printf("Combined sorted array: ");
    for (int i = 0; i < totalCount; i++) {
        printf("%d ", combined[i]);
    }
    printf("\n");

    float median;
    if (totalCount % 2 == 1) {
        median = combined[totalCount / 2];
    } else {
        median = (combined[totalCount / 2 - 1] + combined[totalCount / 2]) / 2.0;
    }
    printf("\nMedian of both arrays combined: %.2f\n", median);
    return 0;
}