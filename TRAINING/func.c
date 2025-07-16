// Write a function that accepts a character in lower case and returns its upper case equivalent

#include <stdio.h>

char toUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');  
    } else {
        return ch;  
    }
}

int main() {
    char ch;
    printf("Enter a lowercase character: ");
    scanf(" %c", &ch);  
    char upper = toUpperCase(ch);
    printf("Uppercase: %c\n", upper);
    return 0;
}
