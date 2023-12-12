#include <stdio.h>
#include <stdlib.h>


int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int heapify(int arr[], int size, int i) {

    int largest = i; // the root element
    int left = 2 * i + 1; // left child
    int right = 2 * i + 2; // right child
  
    if (left < size && arr[left] > arr[largest])
      largest = left;
  
    if (right < size && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue if it is not the largest
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, size, largest);
    }
}

int heapSort(int arr[], int size) {
    // Build the heap
    for (int i = size / 2 - 1; i >= 0; i--)
      heapify(arr, size, i);
  
    // Heap sort
    for (int i = size - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
  }
  
  // Print the array
  int printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
      printf("%d ", arr[i]);
  }
int main()
{
    int *arr, size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) { // Check if the array is null
        printf("Memory allocation error");
        exit(1);
    }
    printf("Please enter %d elements: \n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element - %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    heapSort(arr, size);
    printf("Sorted array is: \n");
    printArray(arr, size);
    printf("\n");
    free(arr);
    return 0;
}
