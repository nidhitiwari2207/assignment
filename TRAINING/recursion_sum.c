// Write a C program to find sum of all natural numbers between 1 to n using recursion

#include <stdio.h>
int sum(int n) {
    if (n == 1)
        return 1;          
    return n + sum(n - 1);  
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        int result = sum(n);
        printf("Sum of natural numbers from 1 to %d is %d\n", n, result);
    }

    return 0;
}
