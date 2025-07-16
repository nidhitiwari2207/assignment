//  A five-digit number is entered through the keyboard. 
// Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.

#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    original = num;

    if (num < 10000 || num > 99999) {
        printf("Please enter a valid five-digit number.\n");
        return 1;
    }
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    printf("Reversed number is: %d\n", reversed);

    if (original == reversed)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
