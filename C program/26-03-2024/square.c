/*#include <stdio.h>
 
void square(int *num) {
   // TODO: Modify the value pointed to by num to its square
}
 
int main() {
   int x = 5;
 
   // TODO: Call the square function and print the modified value of x
 
   return 0;
}*/

#include <stdio.h>
 
void square(int *num) {
   *num = (*num) * (*num); 
}
 
int main() {
   int x = 5;
   square(&x); 
   printf("Modified value of x: %d\n", x); 
   return 0;
}