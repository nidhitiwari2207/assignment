// Write a C program to generate nth Fibonacci term using recursion

#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int i, int n) {
    if (i > n)
        return;

    printf("%d ", fibonacci(i));
    printFibonacciSeries(i + 1, n);  
}

int main() {
    int n;

    printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printf("First %d Fibonacci terms:\n", n);
        printFibonacciSeries(1, n);  
    }

    return 0;
}

