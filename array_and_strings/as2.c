/*
Exercise 2:
Write a C program that takes a string input from the user and prints its length without using any standard library functions.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    
    char str[20];
    int length = 0;

    printf("Type a word: ");
    scanf("%s", str);

    while(str[length] != 0){
        length++;
    }

    printf("The word's length is: %d", length);

    return 0;
}