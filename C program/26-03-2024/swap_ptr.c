/*#include <stdio.h>
 
void swap(int *a, int *b) {
   // TODO: Swap the values pointed to by a and b
}
 
int main() {
   int x = 10, y = 20;
 
   // TODO: Call the swap function and print the values of x and y after swapping
 
   return 0;
}*/

#include <stdio.h>
void swap(int *a, int *b) {
   int ptr=*a;
   *a=*b;
   *b=ptr;
}
int main() {
   int x = 10, y = 20;
   swap(&x,&y);
   printf("%d %d",x,y);
   return 0;
}