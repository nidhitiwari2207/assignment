// . Write a C function to evaluate the series sin(x) = x − (x 3 / 3!) + (x 5 / 5!) − (x 7 / 7!) +……… to five significant digits.

#include <stdio.h>
double sine(double x) {
    double term = x;    
    double sum = x;     
    int n = 1;

    while (1) {
        term *= -1 * x * x / ((2 * n) * (2 * n + 1));  
        if (term > -0.00001 && term < 0.00001)         
            break;
        sum += term;
        n++;
    }
    return sum;
}

int main() {
    double x;

    printf("Enter angle in radians: ");
    scanf("%lf", &x);

    printf("sin(%.5lf) ≈ %.5lf\n", x, sine(x));

    return 0;
}
