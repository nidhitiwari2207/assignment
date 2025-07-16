// Write a program to print all the Pythagorean triplets less than 50. Any three numbers x, y,
//  z are called Pythagorean triplets if x < .Y < z and X2+y2 = Z2

#include <stdio.h>

int main() {
    int x, y, z;

    printf("Pythagorean Triplets less than 50 are:\n");

    for (x = 1; x < 50; x++) {
        for (y = x + 1; y < 50; y++) {
            for (z = y + 1; z < 50; z++) {
                if (x*x + y*y == z*z) {
                    printf("(%d, %d, %d)\n", x, y, z);
                }
            }
        }
    }

    return 0;
}
