// Write a program to accept any number n and print the sum of square of all numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * i;  
    }

    printf("Sum of squares from 1 to %d is: %d\n", n, sum);

    return 0;
}
