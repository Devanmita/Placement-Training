#include <stdio.h>
#include <stdlib.h>
//strcat (str1 + str2)
//strcmp (str1,str2)
int main()
{
    char str[]="Hello World in C";
    char *token;

    token=strtok(str,",");
    while(token !=NULL){
            printf("%s\n",token);
        token=strtok(NULL,",");
    }
    return 0;
}
