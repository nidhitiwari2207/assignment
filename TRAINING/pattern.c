// Write a program to produce the following output:
// A
// BC
// DEFG
// FED
// CB
// A

#include <stdio.h>

int main() {
    char ch = 'A';  
    printf("%c\n", ch++);   

    for (int i = 0; i < 2; i++) {
        printf("%c", ch++);  
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        printf("%c", ch++);  
    }
    printf("\n");

    for (int i = 1; i <= 3; i++) {
        printf("%c", ch - i);  
    }
    printf("\n");
    printf("%c%c\n", 'C', 'B');
    printf("A\n");
    return 0;
}
