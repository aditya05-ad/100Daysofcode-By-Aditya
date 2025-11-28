//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    double costPrice, sellingPrice;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%lf %lf", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        double profit = sellingPrice - costPrice;
        double profitPercent = (profit / costPrice) * 100;
        printf("Profit %.0lf%%\n", profitPercent);
    } 
    else if (costPrice > sellingPrice) {
        double loss = costPrice - sellingPrice;
        double lossPercent = (loss / costPrice) * 100;
        printf("Loss %.0lf%%\n", lossPercent);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
