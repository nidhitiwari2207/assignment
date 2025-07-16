// Write a program to accept any six digit number and print the sum of all even digits of that number 
// and multiplication of all odd digits.

#include <stdio.h>
int main(){
     
    int number;
    int sum=0;
    int multiplication=1;

    printf("enter any six digit number");
    scanf("%d",&number);

    
    while(number>0){
            int digit= number %10;
            if(digit%2==0){
                sum+= digit;
            }
            else{
                multiplication *= digit;
            }
            number = number / 10;
    }

    printf("the sum of even digits are %d\n", sum);
    printf("the multiplication of odd digits are %d\n", multiplication);
}