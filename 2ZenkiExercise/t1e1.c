/*
1. Write a basic bubble sort algorithm in C to sort an array of integers.
*/

/*
//Bubble sort works by repeatedly "bubbling up" the largest 
unsorted element to its correct position in an array. 

//Bubble Sort Pseudocode
for i from 1 to N //round
    for j from 0 to N-1
        if a[j] > a[j+1]
            swap (a[j], a[j+1])

//Time Complexity:
Best Case: O(n) when the array is already sorted.
Average Case: O(n^2)
Worst Case: O(n^2)
*/

#include <stdio.h>

int main(){

    int a[] = {2, 8, 5, 3, 9, 4, 1};
    int arraySize = sizeof(a)/sizeof(a[0]);

    for (int i = 1; i < arraySize; i++) {
        for (int j = 0; j < arraySize - 1; j++) {
            if (a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < arraySize; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

