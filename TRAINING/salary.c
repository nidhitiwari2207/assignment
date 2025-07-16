
// question-1
// Rajesh’s basic salary is input through the keyboard. 
// His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. 
// Write a program to calculate his gross salary.

#include <stdio.h>

int main() {
    float basic_salary, da, hra, gross_salary;
    printf("Enter Rajesh's basic salary: ");
    scanf("%f", &basic_salary);
    hra= 0.20 * basic_salary;
    gross_salary = basic_salary + da + hra;
    printf("Gross Salary = %.2f\n", gross_salary);

    return 0;
}