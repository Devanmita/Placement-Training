#include <stdio.h>

void insertionSort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[] = {27,23,98,78,99,63};
    int n = sizeof(a) / sizeof(a[0]);
    printf("\nArray before sorting:\n");
    printArray(a, n);
    insertionSort(a, n);
    printf("\nArray after sorting:\n");
    printArray(a, n);
    return 0;
}