// Write a program to enter a number and test whether it is a Fibonacci number or not.

#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("%d is a Fibonacci number.\n", num);
        return 0;
    }

    while (1) {
        c = a + b;
        if (c == num) {
            printf("%d is a Fibonacci number.\n", num);
            break;
        }
        if (c > num) {
            printf("%d is NOT a Fibonacci number.\n", num);
            break;
        }
        a = b;
        b = c;
    }

    return 0;
}
