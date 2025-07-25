#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the number \n");
    scanf("%d",&x);

    switch(x){
    case 1:
        printf("X is 1\n");
        break;
    case 2:
        printf("X is 2\n");
        break;
    default:
        printf("X is neither 1 or 2\n\n");
        break;
    }

    return 0;
}
