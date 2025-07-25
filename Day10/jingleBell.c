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
    char str[200], start, end;
    int len, minLen = 6;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline
    len = strlen(str);

    printf("Enter starting character: ");
    scanf(" %c", &start);
    printf("Enter ending character: ");
    scanf(" %c", &end);

    int found = 0;

    printf("Repeated substrings (min length %d) starting with '%c' and ending with '%c':\n", minLen, start, end);
    for (int sublen = minLen; sublen <= len / 2; sublen++) {
        for (int i = 0; i <= len - sublen; i++) {
            if (str[i] == start && str[i + sublen - 1] == end) {
                char temp[100];
                strncpy(temp, &str[i], sublen);
                temp[sublen] = '\0';
                int count = countOccurrences(str, temp);
                if (count > 1) {
                    int unique = 1;
                    for (int j = 0; j < i; j++) {
                        if (str[j] == start && str[j + sublen - 1] == end) {
                            char check[100];
                            strncpy(check, &str[j], sublen);
                            check[sublen] = '\0';
                            if (strcmp(temp, check) == 0) {
                                unique = 0;
                                break;
                            }
                        }
                    }
                    if (unique) {
                        printf("'%s' is repeated %d times.\n", temp, count);
                        found = 1;
                    }
                }
            }
        }
    }
    if (!found)
        printf("No repeated substrings found with the given criteria.\n");

    return 0;
}   