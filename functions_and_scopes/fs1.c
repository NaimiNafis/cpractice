/*Exercise 1:
Create a function that takes two integers as arguments and returns their sum.*/

#include <stdio.h>

void getSum(int *a, int *b) {
    int result = *a + *b;
    printf("Sum of 2 integers: %d\n", result);
}

int main() {
    int x, y;
    printf("Enter 2 numbers to add:");
    scanf("%d %d", &x, &y);

    getSum(&x, &y);
    return 0;
}

