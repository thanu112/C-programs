/*Fill in the rotateArray function to rotate the elements of the given array arr to the right by k positions.
 
#include <stdio.h>
 
void rotateArray(int arr[], int size, int k) {
   // TODO: Implement array rotation logic here
}
 
int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int size = sizeof(arr) / sizeof(arr[0]);
   int k = 2; // Number of rotations
  
   rotateArray(arr, size, k);
  
  printf("Rotated Array: ");
   for (int i = 0; i < size; i++) {
      printf("%d ", arr[i]);
   }
   return 0;
}*/

#include <stdio.h>

void rotateArray(int arr[], int size, int k) {
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2; 

    rotateArray(arr, size, k);

    printf("Rotated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
