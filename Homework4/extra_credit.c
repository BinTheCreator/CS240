#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *arr, size, temp, type;
    printf("Please input the number of values in your arrays: ");
    scanf("%d", &size);
    arr = (int*) malloc(size * sizeof(int)); // Create a dynamic array
    if (arr == NULL) { // Check if the array is null
        printf("Memory allocation error");
        exit(1);
    }
    printf("Input your array values, you should enter %d values.\n", size);
    for (int i = 0; i < size; i++) { // Getting input and add to array
        printf("Enter value - %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Decennding\n");
    scanf("%d", &type);
    if (type == 1) {
        for (int i = 0; i < size - 1 ; i++){ // Using bubble sort to sort, Have (size - 1) is because we use the first element to compare.
            for (int j = 0; j < size - i - 1; j++) // As i increase the number of sort we have to do is decrease so we subtract i
            {
                if (*(arr + j) > *(arr + j + 1)) { // Ascending
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
                }
            }
        }
    } else {
        for (int i = 0; i < size - 1 ; i++){
            for (int j = 0; j < size - i - 1; j++)
            {
                if (*(arr + j) < *(arr + j + 1)) { // Decending
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
                }
            }
        }
    }
    printf("The elements in the array after sorting:\n");
    for (int i = 0; i < size; i++) { // Loop through and print results
        printf("element - %d: %d\n", i + 1, arr[i]);
    }
    free(arr); // free memory
    return 0;
}
