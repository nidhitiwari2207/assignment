// Write a C program to display all array elements using recursion.

#include <stdio.h>

void printArray(int arr[], int index, int size) {
    if (index >= size)
        return;

    printf("%d ", arr[index]);
    printArray(arr, index + 1, size);  
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    printArray(arr, 0, n);  

    return 0;
}
