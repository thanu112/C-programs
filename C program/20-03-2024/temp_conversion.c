/*Create a program to convert temperature from Fahrenheit to Celsius and vice versa. 
Use appropriate data types for the variables involved.*/

#include <stdio.h>

int main() {
    // Write C code here
    float celsius,fahrenheit;
    
    printf("Enter celsius: ");
    scanf("%f",&celsius);
    printf("Enter fahrenheit: ");
    scanf("%f",&fahrenheit);
    
    fahrenheit=(celsius* 9/5) + 32;
    celsius = (fahrenheit - 32)*5/9;
    
    printf("celsius to fahrenheit conversion : %f\n", fahrenheit);
    printf("fahrenheit to celsius conversion : %f", celsius);

    return 0;
}