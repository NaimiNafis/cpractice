/*
Exercise 3:
To create a C function that accepts an integer pointer as an argument and modifies the value it points to.
*/

#include <stdio.h>
#include <stdlib.h>


void modify_value(int *a){
    *a = 2;
}

int main() {
    int x = 3;
    printf("Before: x: %d\n", x);
    modify_value(&x);
    printf("After: x: %d", x);
    return 0;
}