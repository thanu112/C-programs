/*Fill in the findMissingNumber function to find the missing number in the given array arr, which contains consecutive integers starting from 1.
 
 
#include <stdio.h>
 
int findMissingNumber(int arr[], int size) {
   // TODO: Implement logic to find the missing number
   return -1;
}
 
int main() {
   int arr[] = {1, 2, 4, 5, 6};
   int size = sizeof(arr) / sizeof(arr[0]);
  
   int missingNumber = findMissingNumber(arr, size);
  
  printf("Missing Number: %d\n", missingNumber);
   return 0;
}*/

#include <stdio.h>

int findMissingNumber(int arr[], int size) {
    int expectedSum = (size + 1) * (size + 2) / 2; 
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
  
    int missingNumber = findMissingNumber(arr, size);
  
    printf("Missing Number: %d\n", missingNumber);
    return 0;
}
