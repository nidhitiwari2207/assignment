// Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked
//  above 40 hours.Assume that employees do not work for fractional part of an hour

#include <stdio.h>
int main() {
    int i, hours, overtime;
    float pay;

    for (i = 1; i <= 10; i++) {
        printf("Enter hours worked by employee %d: ", i);
        scanf("%d", &hours);

        if (hours > 40) {
            overtime = hours - 40;
            pay = overtime * 12.0;
            printf("Overtime pay for employee %d is Rs. %.2f\n\n", i, pay);
        } else {
            printf("Employee %d has no overtime pay.\n\n", i);
        }
    }

    return 0;
}
