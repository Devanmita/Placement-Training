#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *str) {
    int start = strlen(str);
    for(int i=0; i<start/2;i++){
        char temp=str[i];
        str[i]=str[start-i-1];
        str[start-i-1]=temp;
    }
}
   int main(){
    FILE *inputFile, *outputFile;
    char str[100];
    inputFile = fopen("word.txt", "r");
    outputFile = fopen("output.txt", "w");
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while (fscanf(str, sizeof(str), inputFile) != NULL) {
        reverseString(str);
        fprintf(outputFile, "%s", str);
    }
    printf("Reversed wordxs:\n ");
    fclose(inputFile);
    fclose(outputFile);
    return 0;
   }