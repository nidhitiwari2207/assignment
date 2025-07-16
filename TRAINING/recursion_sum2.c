// Write a C program to find sum of all even or odd numbers in given range using recursion.

#include <stdio.h>

int sum(int start, int end, int isEven) {
    if (start > end)
        return 0;

    if (isEven == 1 && start % 2 == 0)
        return start + sum(start + 1, end, isEven);
    else if (isEven == 0 && start % 2 != 0)  
        return start + sum(start + 1, end, isEven);
    else
        return sum(start + 1, end, isEven);  
}

int main() {
    int start, end, choice;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Enter 1 for even sum, 0 for odd sum: ");
    scanf("%d", &choice);

    int result = sum(start, end, choice);

    if (choice == 1)
        printf("Sum of even numbers = %d\n", result);
    else
        printf("Sum of odd numbers = %d\n", result);

    return 0;
}
