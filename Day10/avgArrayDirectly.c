#include <stdio.h>

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

    float totalSum = 0;
    int totalCount = n1 + n2;

    printf("Array 1: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
        totalSum += arr1[i];
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
        totalSum += arr2[i];
    }
    printf("\n");

    float combinedAvg = totalSum / totalCount;
    printf("\nAverage of both arrays combined: %.2f\n", combinedAvg);

    return 0;
}