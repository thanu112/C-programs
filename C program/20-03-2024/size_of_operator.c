/* Write a program to declare and initialize variables of different data types (int, float, double, char) 
   and print their sizes using the sizeof operator.
*/

#include <stdio.h>
 
int main() {
    // Write C code here
    int int_value = 5;
    float float_value = 0.5;
    double double_value = 10.0;
    char char_value = 'i';
    printf("%d\n",sizeof(int_value));
    printf("%d\n",sizeof(float_value));
    printf("%d\n",sizeof(double_value));
    printf("%d\n",sizeof(char_value));
 
    return 0;
}
