//10.Accept any two numbers, if the first number is greater than second then print the sum of these two numbers, 
// otherwise print their difference. write this progra, using ternary operator.

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter the two numbers");
    scanf("%d %d",&num1,&num2);

    (num1>num2)? printf("the sum of two numbers is:%d\n",num1+num2) : printf("the differnece of two numbers is:%d\n",num1- num2);
    return 0;
}