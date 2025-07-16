// Write a function cube sum ( ) that accepts an integer and returns the sum of the cubes of individual digits of that number. 
// Use this program to print Armstrong numbers in a given range.

#include <stdio.h>

int cube_sum(int num) {
    if (num == 0)
        return 0;

    int digit = num % 10;
    return (digit * digit * digit) + cube_sum(num / 10);  
}

int main() {
    int start, end;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (cube_sum(i) == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
