/*Develop a program that calculates the total cost of items purchased at a store, including tax. 
Use appropriate data types for prices and quantities.*/

#include <stdio.h>

int main() {
    double itemPrice, totalPrice = 0.0, taxRate;
    int quantity, itemCount;
    printf("Enter the number of items purchased: ");
    scanf("%d", &itemCount);

    for (int i = 1; i <= itemCount; i++) {
        printf("Enter price of item %d: $", i);
        scanf("%lf", &itemPrice);
        printf("Enter quantity of item %d: ", i);
        scanf("%d", &quantity);
        totalPrice += itemPrice * quantity;
    }

    printf("Enter the tax rate : ");
    scanf("%lf", &taxRate);
    double taxAmount = (taxRate / 100.0) * totalPrice;
    double totalCost = totalPrice + taxAmount;

    printf("Total cost of items without tax: $%.2lf\n", totalPrice);
    printf("Tax amount: $%.2lf\n", taxAmount);
    printf("Total cost of items with tax: $%.2lf\n", totalCost);

    return 0;
}
