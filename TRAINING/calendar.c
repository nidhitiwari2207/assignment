//  According to the Gregorian calendar, it was Monday on the date 01/01/1900. 
// If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include <stdio.h>

int main() {
    int year, total_days = 0;
    printf("Enter the year: ");
    scanf("%d", &year);

    for (int i = 1900; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            total_days += 366; 
        } else {
            total_days += 365; 
        }
    }

    int day = total_days % 7;

    if (day == 0)
        printf("01/01/%d is a Monday\n", year);
    else if (day == 1)
        printf("01/01/%d is a Tuesday\n", year);
    else if (day == 2)
        printf("01/01/%d is a Wednesday\n", year);
    else if (day == 3)
        printf("01/01/%d is a Thursday\n", year);
    else if (day == 4)
        printf("01/01/%d is a Friday\n", year);
    else if (day == 5)
        printf("01/01/%d is a Saturday\n", year);
    else if (day == 6)
        printf("01/01/%d is a Sunday\n", year);

    return 0;
}
