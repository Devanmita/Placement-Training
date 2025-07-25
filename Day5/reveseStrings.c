#include <stdio.h>
#include <string.h>

void reverseWord(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
}

int main() {
    FILE *inputFile, *outputFile;
    char word[100];

    inputFile = fopen("word.txt", "r");
    outputFile = fopen("reverseWord.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(inputFile, "%s", word) != EOF) {
        reverseWord(word);
        fprintf(outputFile, "%s\n", word); 
    }

    printf("Reversed words written line by line to reverseWord.txt\n");

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}