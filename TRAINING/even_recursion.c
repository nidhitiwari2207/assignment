// Write a C program to print all even or odd numbers in given range using recursion .

#include <stdio.h>

void printNumbers(int current, int end, int isEven) {
    if (current > end)
        return;

    if (isEven && current % 2 == 0)
        printf("%d ", current);
    else if (!isEven && current % 2 != 0)
        printf("%d ", current);

    printNumbers(current + 1, end, isEven);  
}

int main() {
    int start, end;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    printf("Even numbers:\n");
    printNumbers(start, end, 1); 

    printf("\nOdd numbers:\n");
    printNumbers(start, end, 0);  

    return 0;
}
