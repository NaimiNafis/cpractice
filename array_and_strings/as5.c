/*
Create a program that takes a string as input 
and stores it dynamically using malloc(). 
Then, the program should print out the string in reverse.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int size = 20;
    int length = 0;

    char *a = (char *)malloc(sizeof(char) * size);

    printf("Type a word: ");
    scanf("%s", a);

    while(a[length] != 0){
        length++;
    }

    printf("The reversed word is: ");
    for(int i = length - 1; i >= 0; i--){
        printf("%c", a[i]);
    }

    printf("\n");

    free(a);

    return 0;
}