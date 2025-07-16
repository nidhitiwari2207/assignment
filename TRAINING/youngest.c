// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to
// determine the youngest of the three.

#include <stdio.h>

int main() {
    int ram, shyam, ajay;

    printf("Enter the age of Ram: ");
    scanf("%d", &ram);

    printf("Enter the age of Shyam: ");
    scanf("%d", &shyam);

    printf("Enter the age of Ajay: ");
    scanf("%d", &ajay);

    (ram < shyam && ram < ajay) ? printf("Ram is the youngest\n") :
    (shyam < ajay)              ? printf("Shyam is the youngest\n") :
                                  printf("Ajay is the youngest\n");

    return 0;
}
