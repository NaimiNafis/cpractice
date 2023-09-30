/*
Exercise 3:
Write a C program that reverses an input string without using any standard library functions.
*/

#include <stdio.h>

int main(){
    char str[20];
    int length = 0;

    printf("Type a word: ");
    scanf("%s", str);

    while(str[length] != 0){
        length++;
    }

    printf("The reversed word is: ");
    for(int i = length - 1; i >= 0; i--){
        printf("%c", str[i]);
    }

    return 0;
    
}

/*
accept input

*/