#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int result=1;

    printf("Enter the no. of elements: \n ");
    scanf("%d",&n);

    int arr[n];

    printf("\n\nEnter %d elements: \n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        result*=arr[i];
    }

    printf("\n The result is %d \n",result);
    return 0;
}
