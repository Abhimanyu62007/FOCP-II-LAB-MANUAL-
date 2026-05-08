#include <stdio.h>

int main() {
    int marks[5], i, total = 0;
    float percentage;

    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f", percentage);

    return 0;
}
