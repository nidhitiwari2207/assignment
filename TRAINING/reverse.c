//4.If a five-digit number is input through the keyboard, write a program to reverse the number.

#include <stdio.h>

int main(){
    int num,rev=0,digit;
    printf("enter a five digit number:");
    scanf("%d",&num);

    while(num>0){
        digit= num%10;
        rev = rev*10 + digit;
        num= num/10;
    }
    printf("reverse of digits is : %d",rev);
    return 0;
}
