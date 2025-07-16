// Write a program to accept any number up to six digits and print that in words

#include <stdio.h>

int main() {
    int num, digit, rev = 0;

    printf("Enter a number (up to 6 digits): ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    while (rev > 0) {
        digit = rev % 10;

        switch(digit) {
            case 0: printf("zero "); break;
            case 1: printf("one "); break;
            case 2: printf("two "); break;
            case 3: printf("three "); break;
            case 4: printf("four "); break;
            case 5: printf("five "); break;
            case 6: printf("six "); break;
            case 7: printf("seven "); break;
            case 8: printf("eight "); break;
            case 9: printf("nine "); break;
        }

        rev /= 10;
    }

    printf("\n");
    return 0;
}
