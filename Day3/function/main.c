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
    int sum = add1(10,5);
    int product = mul(10,5);
    int subtract = sub(10,5);
    int quot = division(10,5);

    printf("Addition is %d\n",sum);
    printf("Subtraction is %d\n",subtract);
    printf("Multiplication is %d\n",product);
    printf("Division is %d\n",quot);
    return 0;
}
