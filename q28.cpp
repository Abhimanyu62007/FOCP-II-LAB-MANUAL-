#include <stdio.h>

int main() {
    int a[5], i, evenSum = 0, oddSum = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++) {
        if(a[i] % 2 == 0)
            evenSum += a[i];
        else
            oddSum += a[i];
    }

    printf("Even Sum = %d\n", evenSum);
    printf("Odd Sum = %d", oddSum);

    return 0;
}
