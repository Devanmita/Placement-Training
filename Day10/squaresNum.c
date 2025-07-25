#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], square[n];
    int maxSquare = 0, maxNumber;

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        square[i] = arr[i] * arr[i];

        if (i == 0 || square[i] > maxSquare) {
            maxSquare = square[i];
            maxNumber = arr[i];
        }
    }

    printf("\nSquares of the elements:\n");
    for(int i = 0; i < n; i++) {
        printf("%d^2 = %d\n", arr[i], square[i]);
    }

    printf("\nNumber with the greatest square: %d (Square = %d)\n", maxNumber, maxSquare);

    return 0;
}
