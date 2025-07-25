#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a word is a palindrome
int isPalindrome(char word[]) {
    int len = strlen(word);
    int i = 0, j = len - 1;

    while (i < j) {
        if (tolower(word[i]) != tolower(word[j]))
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    FILE *inputFile, *outputFile;
    char word[100];
    int count = 0;

    inputFile = fopen("word.txt", "r");
    outputFile = fopen("palindromes.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(inputFile, "%s", word) != EOF) {
        if (isPalindrome(word)) {
            fprintf(outputFile, "%s\n", word); 
            count++;
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("\nThe palindrome words r printed to a different file 'palindromes.txt'\n");
    printf("Total number of palindromes: %d\n", count);

    return 0;
}