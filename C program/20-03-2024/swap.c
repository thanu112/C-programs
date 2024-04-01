/*Write a program to swap two numbers without using a temporary variable. 
Use appropriate data types for the variables involved.*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    num1 = num1 + num2; 
    num2 = num1 - num2; 
    num1 = num1 - num2; 

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
