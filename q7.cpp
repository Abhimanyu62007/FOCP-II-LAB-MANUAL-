#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        printf("Player 1 wins");
    else if(b > a && b > c)
        printf("Player 2 wins");
    else if(c > a && c > b)
        printf("Player 3 wins");
    else
        printf("Tie");

    return 0;
}
