/*Write a program to demonstrate the use of int, float, and char data types by performing arithmetic 
operations (addition, subtraction, multiplication, division) on variables of these types.*/

#include <stdio.h>
 
int main() {
    // Write C code here
    int intVal1=10,intVal2=5;
    float floatVal1=10.5,floatVal2=5.5;
    char char1 = 'A', char2 = 'B';
    printf("%d %d %d %d\n",intVal1+intVal2,intVal1-intVal2,intVal1*intVal2,intVal1/intVal2);
    printf("%f %f %f %f\n",floatVal1+floatVal2,floatVal1-floatVal2,floatVal1*floatVal2,floatVal1/floatVal2);
    printf("%d %d %d %d\n",char1+char2,char1-char2,char1*char2,char1/char2);
 
    return 0;
}