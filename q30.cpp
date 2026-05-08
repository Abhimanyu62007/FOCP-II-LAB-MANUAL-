#include <stdio.h>

int main() {
    float salary[10], total = 0, average;
    int i;

    for(i = 0; i < 10; i++) {
        scanf("%f", &salary[i]);
        total += salary[i];
    }

    average = total / 10;

    printf("Total Salary = %.2f\n", total);
    printf("Average Salary = %.2f", average);

    return 0;
}
