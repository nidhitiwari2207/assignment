// If the lengths of the sides of a triangle are denoted by a, b, and c, then area of triangle is given by 
// Area = √𝑆(𝑆 − 𝑎)(𝑆 − 𝑏)(𝑆 − 𝑐) Where, S = ( a + b + c ) / 2

#include <stdio.h>
#include <math.h>

double productOfTerms(double S, double sides[], int index) {
    if (index == 3)
        return S;
    return (S - sides[index]) * productOfTerms(S, sides, index + 1);
}

int main() {
    double a, b, c, S, area;
    double sides[3];

    printf("Enter three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        sides[0] = a;
        sides[1] = b;
        sides[2] = c;

        S = (a + b + c) / 2;  

        double product = productOfTerms(S, sides, 0);
        area = sqrt(product);

        printf("Area of the triangle = %.5lf\n", area);
    } else {
        printf("Invalid triangle!\n");
    }
    return 0;
}

