#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int max;

    max = (a > b) ? a : b;

    printf("The greater number is: %d\n", max);
    return 0;
}
