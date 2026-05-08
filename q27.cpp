#include <stdio.h>

int main() {
    int price[10], i, max;

    for(i = 0; i < 10; i++)
        scanf("%d", &price[i]);

    max = price[0];

    for(i = 1; i < 10; i++) {
        if(price[i] > max)
            max = price[i];
    }

    printf("Maximum Price = %d", max);

    return 0;
}
