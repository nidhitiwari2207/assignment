// Input a number and a digit and find whether the digit is present in the number or not,
//  if present then count the number of times it occurs in the number.

#include <stdio.h>

int main() {
    int number, digit, count = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter a digit to search: ");
    scanf("%d", &digit);

    temp = number;  

    while (temp > 0) {
        int last_digit = temp % 10;

        if (last_digit == digit)
            count++;

        temp = temp / 10;
    }

    if (count > 0)
        printf("Digit %d is present %d time(s) in number %d.\n", digit, count, number);
    else
        printf("Digit %d is not present in number %d.\n", digit, number);

    return 0;
}
