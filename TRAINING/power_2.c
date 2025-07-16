// Write a program to find the value of one number raised to the power of another.

#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);
    if (exponent >= 0) {
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }
        printf("%d raised to the power %d is: %lld\n", base, exponent, result);
    } else {
        printf("Negative exponents are not supported in this program.\n");
    }

    return 0;
}
