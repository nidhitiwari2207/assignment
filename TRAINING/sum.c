//3.If a five-digit number is input through the keyboard, 
//write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)

#include <stdio.h>

int main(){
    int num,sum=0,digit;
    printf("enter a five digit number:");
    scanf("%d",&num);

    while(num>0){
        digit= num%10;
        sum = sum + digit;
        num= num/10;
    }
    printf("sum of digits is : %d",sum);
    return 0;
}