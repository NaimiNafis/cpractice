/*
1. Implement Linear Search in C and analyze its time complexity.
2. Implement Binary Search in C and analyze its time complexity.
3. Compare the time complexities of both search algorithms and explain in what scenarios each would be more appropriate.
*/

/*
Differences:
LS: 
1. Works for both sorted & unsorted arrays
2. Time: O(n)
3. Sequantial Assess
BS: 
1. Works only for sorted arrays
2. Time: O(log n base 2)
3. Random Assess
*/

//Linear Search

#include <stdio.h>

int main(){

    int a[] = {2, 8, 5, 3, 9, 4, 1};
    int arraySize = sizeof(a)/sizeof(a[0]);
    int data = 8;
    int found = 0;

    for (int i = 0; i < arraySize; i++) {
        if ( a[i] == data){
            printf("Element found at index: %d", i);
            found = 1;
            break;
        }
    }

    if(!found){
            printf("Element not found.");
        }

    return 0;
}