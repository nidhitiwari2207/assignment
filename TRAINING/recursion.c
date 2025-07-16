// Topic: 3 –Function, Recursion:
// 1. A positive integer is entered through the keyboard; write a program to obtain the prime factors of the number.
//  Modify the function suitably to obtain the prime factors recursively

// 11.Write a C program to print all even or odd numbers in given range using recursion .

#include <stdio.h>

void printEven(int start, int end){
    if (start>end){
        return ;
    }
   
    if(start%2==0){
        printf("%d",start);
    }
    printEven(start +1 ,end);
}

void printOdd(int start, int end){
    if (start>end){
        return ;
    }
   
    if(start%2!=0){
        printf("%d",start);
    }
    printOdd( start + 1,end);
}

int main(){
    int lower, upper , choice;
    printf("enter the lower limit");
    scanf("%d",&lower);

    printf("enter the upper limit");
    scanf("%d",&upper);

    printf("Enter 1 to print even numbers, 2 to print odd numbers: ");
    scanf("%d", &choice);

    if(choice==1){
        printf("Even numbers from %d to %d are:\n", lower, upper);
        printEven(lower, upper);
    }
    else if(choice ==2){
        printf("odd numbers from %d to %d are:",lower,upper);
        printOdd(lower,upper);
    }else {
        printf("Invalid choice.\n");
    }
    return 0;
}
// 17.Write a C program to find factorial of any number using recursion.

// #include <stdio.h>

// int factorial(int x){
//     int f;
//     if(x==0||x==1){
//         return 1;
//     }
//     else{
//         f= x* factorial(x-1);
//         return f;
//     }
// }
// int main(){
//     int f, n;
//     printf("enter any number");
//     scanf("%d",&n);
//     f= factorial(n);
//     printf("factorial of %d is %d",n,f);
//     return 0;
// }