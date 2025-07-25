#include <stdio.h>
#include <stdlib.h>

int main(){
    char sentence[100];
    int i;
    int count=0;

    printf("Enter the sentence: ");
    scanf("%[^\n]", sentence);

    for(i=0; sentence[i]!= '\0'; i++){
        if ((sentence[i] >= 'a' && sentence[i] <= 'z') || 
            (sentence[i] >= 'A' && sentence[i] <= 'Z')) {
                count++;
        }
    }

    printf("Number of letters in the sentence: %d\n", count);

    return 0;
}