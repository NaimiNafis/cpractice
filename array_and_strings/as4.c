/*
Exercise:

Create a dynamic array of integers using malloc().
Fill the array with numbers from 1 to 5.
Use realloc() to resize the array to hold 10 numbers.
Fill the new slots in the array with numbers from 6 to 10.
Print all the numbers in the array to confirm they are correct.
Don't forget to free the memory using free().
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *a;
    int size = 5;

    a = (int *)malloc(sizeof(int) * size);

    for(int i = 0; i < size; i++){
        a[i] = i;
        printf("a[%d]: %d\n", i, i + 1);
    }

    a = realloc(a, sizeof(int) * (size + 5));

    for(int i = size; i < size+5; i++){
        a[i] = i;
        printf("a[%d]: %d\n", i, i + 1);
    }

    free(a);

    return 0;
}