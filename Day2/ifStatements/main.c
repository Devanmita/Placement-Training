#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char choice;
    printf("Enter the hours u slept: \n");
    scanf("%d",&n);

    if (n>=8){
        printf("Shall we study C programming *_<\n Y or N \n");
        scanf(" %c",&choice);
        if(choice == 'Y' || 'y')
            printf("\n\nWhere shall we start from: \n\n");
        else
            printf("\n\nu better sleep..... Don't study -_-\n\n");
    }else if(n<8 && n>=6){
        printf("Are you feeling sleepy ^_^\n Y or N \n");
        scanf(" %c",&choice);
        if(choice == 'Y' || 'y')
            printf("\n\nStop using phone and sleep -_-\n\n");
        else
            printf("\n\nHurray, let's study now *_*\n\n");
    }else{
        printf("\n\nYou better take a nap -_-\n\n");
    }
    return 0;
}
