//8. Write a program to accept the number in decimal and print the number in octal and
// hexadecimal. ,


#include <stdio.h>

int main() {
    int num, n, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    n = num;
    int octal = 0;
    int place = 1;

    while (n > 0) {
        rem = n & 7;         
        octal = octal + (rem * place);
        place = place * 10;
        n = n >> 3;          
    }
    printf("Octal: %d\n", octal);
    n = num;
    printf("Hexadecimal: ");

    int i = 28;  
    int started = 0; 

    while (i >= 0) {
        rem = (n >> i) & 15;  
        if (rem != 0 || started || i == 0) {
            started = 1;
            if (rem < 10)
                printf("%d", rem);
            else
                printf("%c", 'A' + rem - 10);
        }
        i = i - 4;
    }
    printf("\n");
    return 0;
}