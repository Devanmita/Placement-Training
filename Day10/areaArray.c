#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int num1, num2, index1 = -1, index2 = -1;
    printf("Enter two numbers from the array:\n");
    scanf("%d %d", &num1, &num2);

    // Find the first occurrence of the two numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] == num1 && index1 == -1)
            index1 = i;
        else if (arr[i] == num2 && index2 == -1)
            index2 = i;
    }

    if (index1 == -1 || index2 == -1) {
        printf("One or both numbers not found in the array.\n");
        return 1;
    }

    int square1 = num1 * num1;
    int square2 = num2 * num2;
    int indexDiff = abs(index1 - index2);

    int result = (square1 + square2) - indexDiff;

    printf("\nSquare of %d (index %d): %d", num1, index1, square1);
    printf("\nSquare of %d (index %d): %d", num2, index2, square2);
    printf("\nDifference between indices: %d", indexDiff);
    printf("\n\nFinal Result = (%d + %d) - %d = %d\n", square1, square2, indexDiff, result);

    return 0;
}
