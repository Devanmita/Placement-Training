#include <stdio.h>
#include <stdlib.h>

int add1(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return y-x;
}
int mul(int x, int y){
    return x*y;
}
int division(int x,int y){
    return x/y;
}
int main()
{
    int (*operation)(int,int);
    operation=add1;
    printf("Addition: %d\n",operation(10,5));

    operation=sub;
    printf("Subtraction: %d\n",operation(10,5));

    operation=mul;
    printf("Product: %d\n",operation(10,5));

    operation=division;
    printf("Quotient: %d\n",operation(10,5));

    return 0;
}
