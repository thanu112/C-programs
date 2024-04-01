/*Code Gaps
Fill in the reverseArray function to reverse the elements of the given array arr in-place.
#include <stdio.h>
 
void reverseArray(int arr[], int size) {
   // TODO: Implement array reversal logic here
}
 
int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int size = sizeof(arr) / sizeof(arr[0]);
  
   reverseArray(arr, size);
  
  printf("Reversed Array: ");
   for (int i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }
   return 0;
}*/

#include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

