#include <stdio.h>

int main() {
    int itemNo, quantity;
    float unitPrice, amount, discount, finalAmount;

    scanf("%d %d %f", &itemNo, &quantity, &unitPrice);

    amount = quantity * unitPrice;
    discount = amount * 0.20;
    finalAmount = amount - discount;

    printf("Item No: %d\n", itemNo);
    printf("Amount: %.2f\n", amount);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount: %.2f", finalAmount);

    return 0;
}
