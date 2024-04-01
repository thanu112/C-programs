/*Reverse Number:
Write a program that prompts the user to enter a positive integer and then prints the number in reverse order */

#include <stdio.h>
int ReverseTheNumber(int number){
    while(number>0){
        printf("%d",number%10);
        number/=10;
    }
}
int main() {
    int number;
    printf("Enter a positive number:");
    scanf("%d",&number);
    ReverseTheNumber(number);
 
    return 0;
}