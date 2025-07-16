// A positive integer is entered through the keyboard; write a function to find the binary equivalent of
//  this number using recursion.

#include <stdio.h>

void printBinary(int n) {
    if (n == 0)
        return;

    printBinary(n / 2);         
    printf("%d", n % 2);       
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Binary: ");
    if (num == 0)
        printf("0");           
    else
        printBinary(num);       
    printf("\n");

    return 0;
}
