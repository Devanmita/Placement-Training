#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k : ");
    scanf("%d", &k);

    if(k >= 1 && k <= n) {
        printf("The %dth element is: %d\n", k, arr[k-1]);
    } else {
        printf("Invalid value of k!\n");
    }

    return 0;
}