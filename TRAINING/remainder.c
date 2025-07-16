//9. Accept any five digit number and print the value of remainder after dividing by 3.

#include <stdio.h>
int main() {
int num, remainder;

printf("Enter any five-digit number: ");
scanf("%d", &num);
remainder = num % 3;
printf("Remainder when %d is divided by 3 is: %d\n", num, remainder);
return 0;
}