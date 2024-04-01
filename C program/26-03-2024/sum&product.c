/*The calculateSumAndProduct function takes two numbers (num1 and num2) and two pointers (sum and product) as parameters.
Inside the function, it calculates the sum and product of the two numbers and stores the results at the memory locations pointed to by sum and product.
In the main function, we declare variables sum and product.
We then call the calculateSumAndProduct function, passing the values of num1 and num2, as well as the addresses of sum and product.
After the function call, the values of sum and product are updated, and we can print the results*/

#include <stdio.h>
 
void calculateSumAndProduct(int num1, int num2, int *sum, int *product) {
    *sum = num1 + num2;
    *product = num1 * num2;
}
 
int main() {
    int num1 = 5;
    int num2 = 7;
    int sum, product;
    calculateSumAndProduct(num1, num2, &sum, &product);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    return 0;
}