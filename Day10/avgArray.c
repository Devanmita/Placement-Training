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

    float sum1 = 0, sum2 = 0, avg1, avg2, avg_avg;

    printf("Array 1: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
        sum1 += arr1[i];
    }
    avg1 = sum1 / n1;
    printf("\nAverage of Array 1: %.2f\n", avg1);

    printf("Array 2: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
        sum2 += arr2[i];
    }
    avg2 = sum2 / n2;
    printf("\nAverage of Array 2: %.2f\n", avg2);

    avg_avg = (avg1 + avg2) / 2;
    printf("\nArray of averages: [%.2f, %.2f]\n", avg1, avg2);
    printf("\nAverage of averages: %.2f\n", avg_avg);
    return 0;
}