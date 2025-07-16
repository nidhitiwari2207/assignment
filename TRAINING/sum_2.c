//5. If a four-digit number is input through the keyboard,
//  write a program to obtain the sum of the first and last digit of this number.

#include <stdio.h>

int main(){
    int num,sum=0,first_digit,last_digit;
    printf("enter a four digit number:");
    scanf("%d",&num);

        last_digit= num%10;
        first_digit= num/1000;
        sum = first_digit + last_digit;
    
    printf("sum of digits is : %d",sum);
    return 0;
}