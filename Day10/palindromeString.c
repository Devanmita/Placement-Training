#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *word, int start, int end) {
    while (start < end) {
        if (tolower(word[start]) != tolower(word[end]))
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[200];
    printf("Enter a sentence or words: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    char *token = strtok(str, " ");
    int found = 0;

    while (token != NULL) {
        int len = strlen(token);
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (isPalindrome(token, i, j)) {
                    printf("Palindrome substring: ");
                    for (int k = i; k <= j; k++)
                        putchar(token[k]);
                    printf(" (in word: %s)\n", token);
                    found = 1;
                }
            }
        }
        token = strtok(NULL, " ");
    }

    if (!found)
        printf("No palindrome substrings found.\n");

    return 0;
}
