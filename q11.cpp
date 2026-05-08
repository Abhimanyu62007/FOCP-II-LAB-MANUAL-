#include <stdio.h>

int main() {
    int quantity;
    float price, total, finalAmount;

    scanf("%d %f", &quantity, &price);

    total = quantity * price;

    if(quantity > 1000)
        finalAmount = total - (total * 0.10);
    else
        finalAmount = total;

    printf("Total Expense: %.2f", finalAmount);

    return 0;
}
