#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    printf("Enter the no. of elements: \n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("Reversed array \n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}