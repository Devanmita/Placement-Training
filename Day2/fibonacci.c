#include <stdio.h>
 int main(){
    int a=0;
    int b=1;
    int next;

    for (int i=0; i<=10; i++)
        next=a+b;
        a=b;
        b=next;
    return 0;
 }