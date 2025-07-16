// Write a C program to print all natural numbers between 1 to n using recursion.

#include <stdio.h>
void printNatural(int current, int n) {
    if (current > n)
        return;

    printf("%d ", current);
    printNatural(current + 1, n);  
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d:\n", n);
    printNatural(1, n);  

    return 0;
}
