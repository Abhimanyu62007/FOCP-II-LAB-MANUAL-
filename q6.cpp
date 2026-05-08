#include <stdio.h>

int main() {
    int n, i;
    float basicSalary, bonus, netSalary;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        scanf("%f", &basicSalary);

        bonus = basicSalary * 0.12;
        netSalary = basicSalary + bonus;

        printf("Employee %d\n", i);
        printf("Basic Salary: %.2f\n", basicSalary);
        printf("Bonus: %.2f\n", bonus);
        printf("Net Salary: %.2f\n", netSalary);
    }

    return 0;
}
