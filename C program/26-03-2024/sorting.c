/*You are tasked with creating a simple program that sorts an array of integers using different sorting algorithms. 
However, instead of implementing each sorting algorithm separately, you are required to utilize function pointers to switch between them dynamically.
Write a C program that implements three sorting algorithms: bubble sort, selection sort, and insertion sort. 
Define each sorting function to take an integer array and its size as arguments and sort the array in ascending order. 
Additionally, declare a function pointer type named SortFunction that points to functions with the same signature.
Your program should prompt the user to enter the number of elements in the array and the elements themselves. 
Then, it should display a menu allowing the user to choose the sorting algorithm they want to use. 
Based on the user's choice, use the appropriate function pointer to sort the array and display the sorted result.*/

#include <stdio.h>

typedef void (*SortFunction)(int[], int);

void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void insertionSort(int arr[], int size);

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    SortFunction sortFunctions[] = {bubbleSort, selectionSort, insertionSort};
    int choice;
    printf("\nSelect a sorting algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 3) {
        printf("Invalid choice\n");
        return 1;
    }

    // Sort the array using the chosen sorting algorithm
    sortFunctions[choice - 1](arr, n);

    // Display the sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] and arr[minIndex]
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
