// Write a program to print all the ASCII values and their equivalent characters using a while loop.
// The ASCII values vary from 0 to 255.25.

#include <stdio.h>

int main() {
    int i = 0;

    printf("ASCII values and their corresponding characters:\n");
    while (i <= 255) {
        printf("ASCII value: %3d --> Character: %c\n", i, i);
        i++;
    }

    return 0;
}
