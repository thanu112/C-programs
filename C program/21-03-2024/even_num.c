#include <stdio.h>
 
int main() {
    // Write C code here
    printf("Even numbers from 1 to 100:");
    for(int i=0;i<=100;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
 
    return 0;
}