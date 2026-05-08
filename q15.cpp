#include <stdio.h>

int main() {
    int n, i, num, max;

    scanf("%d", &n);

    scanf("%d", &max);

    for(i = 1; i < n; i++) {
        scanf("%d", &num);

        if(num > max)
            max = num;
    }

    printf("Largest = %d", max);

    return 0;
}
