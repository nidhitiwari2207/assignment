// Write a recursive function to obtain the first 25 numbers of a Fibonacci sequence. In a Fibonacci sequence the sum of two 
// successive terms gives the third term. Following are the first few terms of the Fibonacci sequence: 
// 1 1 2 3 5 8 13 21 34 55 89...

#include <stdio.h>
int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("First 25 Fibonacci numbers:\n");
    for (int i = 1; i <= 25; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
