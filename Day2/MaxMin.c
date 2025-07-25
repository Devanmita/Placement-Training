#include <stdio.h>
 int main(){
    int n,i,num,max,min;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter the numbers: \n");
    scanf("%d",&num);

    max=num;
    min=num;

    for(i=1;i<n;i++){
        scanf("%d",&num);
        if(num>max){
            max=num;
        }
        if(num<min){
            min=num;
        }
    }
    printf("Max is:%d \n",max);
    printf("Min is:%d \n",min);
    return 0;
 }