// Write a C program to find sum of elements of array using recursion

#include <stdio.h>

int sumArray(int arr[], int index, int size) {
    if (index >= size)
        return 0;

    return arr[index] + sumArray(arr, index + 1, size);  
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = sumArray(arr, 0, n);

    printf("Sum of array elements = %d\n", total);

    return 0;
}
