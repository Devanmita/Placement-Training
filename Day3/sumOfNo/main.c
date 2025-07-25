#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    if(n==0)
        return 0;
    else
        return n+sum(n-1);
}
int main()
{
    int result=sum(100);
    printf("Sum of numbers are: %d\n",result);

    return 0;
}
