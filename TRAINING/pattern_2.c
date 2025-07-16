// Write a program to produce the following output:

// 1
// 23
// 456
// 78910

#include <stdio.h>

int main() {
    int num = 1;  

    for (int i = 1; i <= 4; i++) {          
        for (int j = 1; j <= i; j++) {      
            printf("%d", num++);
        }
        printf("\n");
    }

    return 0;
}
