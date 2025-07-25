
#include <stdio.h>

int main() {
    int x = 5;
    int *ptr = &x;
    printf("Initial value of x: %d\n", x);  // Output: 5
    *ptr = 20;  // Change the value at the memory location
    printf("x is now %d\n", x);  // Output: 20
    return 0;
}