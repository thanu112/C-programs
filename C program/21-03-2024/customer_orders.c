/*Scenario:
You are developing a program for a fast-food restaurant to handle customer orders. 
The program needs to display a menu of food items available for ordering and allow the customer to select an item using a number. 
After selecting an item, the program should display the price of the selected item and calculate the total bill amount based on the quantity ordered.
 
Exercise Question:
Write a C program for the fast-food restaurant to handle customer orders. 
The program should display a menu of food items along with their prices. 
The menu should include items such as burgers, fries, drinks, etc. The program should prompt the customer to select an item by entering its corresponding number from the menu. 
Once the item is selected, the program should prompt the customer to enter the quantity of the selected item. 
Finally, the program should calculate and display the total bill amount.
 
Your program should:
 
Display a menu of food items along with their prices.
Prompt the customer to select an item by entering its corresponding number from the menu.
Use a switch statement to determine the price of the selected item based on the user's choice.
Prompt the customer to enter the quantity of the selected item.
Calculate and display the total bill amount.*/

#include <stdio.h>
 
int main() {
    int choice;
    printf("MENU\n");
    printf("1. Burger - Rs.150\n");
    printf("2. Drinks - Rs.200\n");
    printf("3. Fries - Rs.100\n");
    printf("Enter the number of the item you'd like to order: ");
    scanf("%d", &choice);
    int price;
    switch(choice) {
        case 1:
            price = 150;
            break;
        case 2:
            price = 200;
            break;
        case 3:
            price = 100;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }
    int quantity;
    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    int total = price * quantity;
    printf("Total bill amount: Rs.%d\n", total);
    return 0;
}