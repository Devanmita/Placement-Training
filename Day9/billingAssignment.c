#include <stdio.h>



int main() {
    int choice, qty;
    float price, total = 0;
    char calcOp;
    float num1, num2, calcResult;

    printf("Welcome to Simple Restaurant Billing\n");
    printf("Menu:\n1. Burger - Rs.50\n2. Pizza - Rs.100\n3. Coffee - Rs.30\n4. Sandwich - Rs.40\n");
    printf("Enter item number and quantity (0 to finish):\n");

    while (1) {
        printf("Item (1-4, 0 to finish): ");
        scanf("%d", &choice);
        if (choice == 0) break;
        printf("Quantity: ");
        scanf("%d", &qty);

        switch(choice) {
            case 1: price = 50; break;
            case 2: price = 100; break;
            case 3: price = 30; break;
            case 4: price = 40; break;
            default: printf("Invalid item.\n"); continue;
        }
        total += price * qty;
    }

    printf("Total bill: Rs.%.2f\n", total);
    printf("Thank you for visiting!\n");
    return 0;
}