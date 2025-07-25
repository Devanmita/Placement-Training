#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[n][MAX];
    printf("Enter the words:\n");

    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    char prefix[MAX];
    strcpy(prefix, words[0]);

    for (int i = 1; i < n; i++) {
        int j = 0;

        while (prefix[j] && words[i][j] && prefix[j] == words[i][j]) {
            j++;
        }
        prefix[j] = '\0'; 

        if (strlen(prefix) == 0) {
            break;
        }
    }

    if (strlen(prefix) == 0) {
        printf("No common prefix found.\n");
    } else {
        printf("Longest common prefix: %s\n", prefix);
    }

    return 0;
}
