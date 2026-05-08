#include <stdio.h>

int main() {
    int temp[30], i, min;

    for(i = 0; i < 30; i++)
        scanf("%d", &temp[i]);

    min = temp[0];

    for(i = 1; i < 30; i++) {
        if(temp[i] < min)
            min = temp[i];
    }

    printf("Minimum Temperature = %d", min);

    return 0;
}
