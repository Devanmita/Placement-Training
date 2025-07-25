#include <stdio.h>
#include <string.h>

int main(){
    FILE *file=fopen("word.txt","r");
    char word[100];
    int count=0;

    if(file==NULL){
        printf("Error\n");
        return 1;
    }
    printf("Words ending with s are: \n");
    while(fscanf(file,"%s",word)!=EOF){
        int len=strlen(word);
        if(len>0 && word[len-1]=='s'){
            printf("%s\n",word);
            count++;
        }
    }
    printf("\n\nThe no. of words are : %d\n\n",count);
    fclose(file);
    return 0;
}