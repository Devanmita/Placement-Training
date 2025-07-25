#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    if(n<10)
        return 0;
    if(n%5==0)
        return sum(n-1);
    else
        return n+sum(n-1);
}

int main()
{
    int result=sum(200);
    printf("Sum of numbers are: %d\n",result);

    return 0;
}
