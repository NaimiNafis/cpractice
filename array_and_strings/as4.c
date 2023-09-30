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