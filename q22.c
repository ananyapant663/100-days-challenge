// Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    
    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Profit %.0f%%\n", percentage);
    }
    else if (sellingPrice < costPrice) {
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Loss %.0f%%\n", percentage);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
