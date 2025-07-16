// Write a C program to find maximum and minimum elements in array using recursion.

#include <stdio.h>

int findMax(int arr[], int index, int size) {
    if (index == size - 1)
        return arr[index];

    int maxRest = findMax(arr, index + 1, size);
    return (arr[index] > maxRest) ? arr[index] : maxRest;
}

int findMin(int arr[], int index, int size) {
    if (index == size - 1)
        return arr[index];

    int minRest = findMin(arr, index + 1, size);
    return (arr[index] < minRest) ? arr[index] : minRest;
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, 0, n);
    int min = findMin(arr, 0, n);

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
