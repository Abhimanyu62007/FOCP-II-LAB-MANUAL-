#include <stdio.h>

int main() {
    int marks[3][5], i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    printf("2nd subject of 1st student = %d\n", marks[0][1]);
    printf("5th subject of 3rd student = %d", marks[2][4]);

    return 0;
}
