/*#include <stdio.h>
 
int main() {
   char str[] = "Hello, Pointers!";
   char *ptr =  TODO: Initialize ptr to point to the first character of str ;
 
   // TODO: Print each character of str using the pointer
 
   //return 0;
}
*/

#include <stdio.h>
 
int main() {
   char str[] = "Hello, Pointers!";
   char *ptr = str; 
     for(int i=0;str[i]!='\0';i++){
         printf("%c",*(ptr+i));
     }
   return 0;
}