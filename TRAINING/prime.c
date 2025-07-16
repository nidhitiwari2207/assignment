// Write a program to print prime numbers from 1 to 99. (Hint: 'See P5.27, instead of entering a number, take a for loop that generates numbers from 1 to 99)

#include <stdio.h>

int main() {
    int num, i, count;
    printf("Prime numbers between 1 and 99 are:\n");
    for (num = 2; num <= 99; num++) {
        count = 0;

        for (i = 1; i <= num; i++) {
            if (num % i == 0)
                count++;
        }

        if (count == 2)
            printf("%d ", num);
    }

    printf("\n");
    return 0;
}
