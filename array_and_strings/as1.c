/*
Exercise 1:
Declare an array of integers and fill it with numbers from 1 to 10. Then, print the elements in reverse order.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_size = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = array_size - 1; i >= 0; i--){
        printf("%d\n", numbers[i]);
    }

    return 0;
}