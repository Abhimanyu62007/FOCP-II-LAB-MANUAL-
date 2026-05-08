#include <stdio.h>

int main() {
    int a[5], i, largest, secondLargest;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    if(a[0] > a[1]) {
        largest = a[0];
        secondLargest = a[1];
    } else {
        largest = a[1];
        secondLargest = a[0];
    }

    for(i = 2; i < 5; i++) {
        if(a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if(a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second Largest = %d", secondLargest);

    return 0;
}
