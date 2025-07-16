// Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 25;   
    int cols = 80;   

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c", 1);  
        }
        printf("\n");
    }

    return 0;
}
