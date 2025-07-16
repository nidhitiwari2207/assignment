// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter
// . For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.

#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        printf("The area (%d) is greater than the perimeter (%d).\n", area, perimeter);
    } else if (area < perimeter) {
        printf("The perimeter (%d) is greater than the area (%d).\n", perimeter, area);
    } else {
        printf("The area and perimeter are equal (%d).\n", area);
    }

    return 0;
}
