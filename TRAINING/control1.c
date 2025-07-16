//  If cost price and selling price of an item is input through the keyboard, 
// write a program to determine whether the seller has made profit or incurred loss. 
// Also determine how much profit he made or loss he incurred.

#include <stdio.h>
int main() {
    float cost_price, selling_price, amount;

    printf("Enter the Cost Price: ");
    scanf("%f", &cost_price);

    printf("Enter the Selling Price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        amount = selling_price - cost_price;
        printf("Profit of ₹%.2f\n", amount);
    } else if (cost_price > selling_price) {
        amount = cost_price - selling_price;
        printf("Loss of ₹%.2f\n", amount);
    } else {
        printf("No Profit No Loss.\n");
    }
    return 0;
}