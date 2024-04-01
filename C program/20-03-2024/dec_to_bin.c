/*Implement a program that converts a decimal number to binary representation. 
Make sure to handle both integer and fractional parts of the number.*/

#include <stdio.h>
#include <stdlib.h> 

int main() {
    char input[50];
    printf("Enter a number: ");
    scanf("%s", input);

    int point = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '.') {
            point = 1;
            break;
        }
    }
    
    if (point) {
        float number = atof(input);
        printf("Binary representation: ");
        int intPart = (int)number;
        float fracPart = number - intPart;

        // Convert the integer part to binary
        int decimalPart = 0, i = 1;
        while (intPart != 0) {
            decimalPart += (intPart % 2) * i;
            intPart /= 2;
            i *= 10;
        }
        printf("%d.", decimalPart);

        // Convert the fractional part to binary
        int precision = 10; 
        while (precision--) {
            fracPart *= 2;
            printf("%d", (int)fracPart);
            fracPart -= (int)fracPart;
        }
    } else {
        int number = atoi(input);
        printf("Binary representation: ");
        int binary = 0, i = 1;
        while (number != 0) {
            binary += (number % 2) * i;
            number /= 2;
            i *= 10;
        }
        printf("%d\n", binary);
    }

    return 0;
}