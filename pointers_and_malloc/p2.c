/*
Exercise 2: Dynamic Memory Allocation
Objective:
Allocate an array of integers dynamically using malloc, populate it, and then free the memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a;
    int size = 5;
    
    a = (int*)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++){
        a[i] = size - i;
    }

    for(int i = 0; i < size; i++){
        printf("a[%d]: %d \n", i, a[i]);
    }

    free(a);
    

    return 0;
}

/*
NOTE:

In plain English, the expression a = (int *) malloc(size * sizeof(int)); does the following:

malloc(size * sizeof(int)): Allocates a chunk of memory on the heap. The size of this chunk is equal to size multiplied by the size of an integer. In other words, you're reserving space for size number of integers.

(int *): This is a type cast that explicitly tells the compiler you want to treat the memory allocated by malloc as a pointer to integers.

a =: This assigns the address of the first byte of the allocated memory to a, which is a pointer to an integer.

*/

/*
NOTE:

Step 1: Core Differences

malloc (Memory Allocation): Allocates uninitialized memory.
calloc (Contiguous Allocation): Allocates zero-initialized memory.

Step 2: Performance Implications

malloc is usually faster because it doesn't initialize the memory to zero.
calloc could be slower because it initializes all the allocated memory to zero.

Step 3: Use-Case Scenarios

Use malloc when speed is crucial and you plan to immediately fill the allocated memory with your own values.
Use calloc when you want the allocated memory to be initialized to zero, for example, when you're creating an array and want all elements to be zero initially.

*/