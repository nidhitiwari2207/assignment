// A positive integer is entered through the keyboard; write a program to obtain the prime factors of the number. 
// Modify the function suitably to obtain the prime factors recursively.

#include <stdio.h>
void printPrimeFactors(int n, int i) {
    if (n <= 1)
        return;
    if (n % i == 0) {
        printf("%d ", i);
        printPrimeFactors(n / i, i);  
    } else {
        printPrimeFactors(n, i + 1);  
    }
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    printPrimeFactors(num, 2);
    return 0;
}
