// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    int area;

    // Input 3 points
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    area = x1 * (y2 - y3) + 
           x2 * (y3 - y1) + 
           x3 * (y1 - y2);

    if (area == 0)
        printf("The points lie on the same straight line.\n");
    else
        printf("The points do NOT lie on the same straight line.\n");

    return 0;
}
