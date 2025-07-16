//  Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.

#include<stdio.h>
int main()
{
    int num;
    printf("enter any integer:");
    scanf("%d",&num);

    if(num%2==0){
        printf("number %d is even",num);
    }

    else{
    printf("number %d is odd",num);
    }
    return 0;
}