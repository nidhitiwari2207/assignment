// Write a program to accept any number n and print the cube of all numbers from 1 to n which are divisible by 3.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Cubes of numbers from 1 to %d that are divisible by 3:\n", n);

    for (i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            printf("%d^3 = %d\n", i, i * i * i);
        }
    }

    return 0;
}
