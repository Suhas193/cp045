#include <stdio.h>
#include <stdlib.h>
#include "sortingLib.h"
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Available sorting techniques:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("5. Quick Sort\n");
    int choice;
    printf("Enter your choice of sorting technique: ");
    scanf("%d", &choice);
    printf("Original array: ");
    printArray(arr, size);
    switch (choice)
    {
    case 1:
        bubbleSort(arr, size);
        printf("Array after Bubble Sort: ");
        break;
    case 2:
        selectionSort(arr, size);
        printf("Array after Selection Sort: ");
        break;
    case 3:
        insertionSort(arr, size);
        printf("Array after Insertion Sort: ");
        break;
    case 4:
        mergeSort(arr, 0, size - 1);
        printf("Array after Merge Sort: ");
        break;
    case 5:
        quickSort(arr, 0, size - 1);
        printf("Array after Quick Sort: ");
        break;
    default:
        printf("Invalid choice\n");
        return 1;
    }
    printArray(arr, size);
    return 0;
}
