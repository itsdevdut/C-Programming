#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;

    printf("Input Cost Price: ");
    scanf("%f", &costPrice);

    printf("Input Selling Price: ");
    scanf("%f", &sellingPrice);


    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        printf("You can book your profit amount: %.2f\n", profitOrLoss);
    } else if (costPrice > sellingPrice) {
        profitOrLoss = costPrice - sellingPrice;
        printf("You have incurred a loss of amount: %.2f\n", profitOrLoss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
