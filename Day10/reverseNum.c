#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Reversed number: 0\n");
        return 0;
    }

    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (isNegative)
        printf("Reversed number: -%d\n", reversed);
    else
        printf("Reversed number: %d\n", reversed);

    return 0;
}
