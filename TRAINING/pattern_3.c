// Write a program to produce the following output:
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1



#include <stdio.h>

int main() {
    int n = 5;  
    int coef;

    for (int i = 0; i < n; i++) {
        coef = 1;

        for (int j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);  
        }

        printf("\n");
    }

    return 0;
}
