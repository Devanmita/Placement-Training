#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(0));
    int num=(rand()%100)+1;
    printf("Random number: %d\n",num);
    return 0;
}