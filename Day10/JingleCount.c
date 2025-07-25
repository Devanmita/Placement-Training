#include <stdio.h>
#include <string.h>

int countOccurrences(const char *str, const char *word) {
    int count = 0;
    int len_word = strlen(word);
    int len_str = strlen(str);

    for (int i = 0; i <= len_str - len_word; i++) {
        if (strncmp(&str[i], word, len_word) == 0)
            count++;
    }
    return count;
}

int main() {
    char str[] = "JingleBellJingleBellJingleAllTheWay";
    char word1[] = "Jingle";
    char word2[] = "JingleBell";
    char word3[] = "ll";
    char word4[] = "All";

    printf("'%s' is repeated %d times.\n", word1, countOccurrences(str, word1));
    printf("'%s' is repeated %d times.\n", word2, countOccurrences(str, word2));
    printf("'%s' is repeated %d times.\n", word3, countOccurrences(str, word3));
    printf("'%s' is repeated %d times.\n", word4, countOccurrences(str, word4));

    return 0;
}