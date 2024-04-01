/*Fill in the findIntersection function to find and print the intersection of two arrays arr1 and arr2.
 
#include <stdio.h>
 
void findIntersection(int arr1[], int size1, int arr2[], int size2) {
   // TODO: Implement logic to find and print the intersection of two arrays
}
 
int main() {
   int arr1[] = {1, 2, 3, 4, 5};
   int size1 = sizeof(arr1) / sizeof(arr1[0]);
   int arr2[] = {3, 4, 5, 6, 7};
   int size2 = sizeof(arr2) / sizeof(arr2[0]);
  
  findIntersection(arr1, size1, arr2, size2);
   return 0;
}*/

#include <stdio.h>

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    printf("Intersection of the two arrays: ");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; 
            }
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {3, 4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
  
    findIntersection(arr1, size1, arr2, size2);
    return 0;
}
