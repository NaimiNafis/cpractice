/*
1. Write a function in C that calculates the factorial of a number using a loop and analyze its time complexity.
2. Write another function that calculates the factorial of a number using recursion and analyze its time complexity.
3. Compare both methods in terms of time complexity.
*/

#include <stdio.h>

//loop
int main(){

    int n = 5;
    int i = 1;
    int factorial = 1;

    for (int i = 1; i <= n ; i++) {
        factorial *= i;
    }

    printf("Factorial of %d : %d ", n, factorial);

    return 0;
}

//recursion (consume more stack memories)
// int getFactorial(int n){
//     if (n == 1) {
//         return 1;
//     }
//     else {
//         return n * getFactorial(n-1);
//     }
// }

// int main(){

//     int n = 5;
//     getFactorial(n);
//     printf("Factorial of %d : %d ", n, getFactorial(n));

//     return 0;
// }

//3. Both is O(n). For recursion O(1) * O(1) * ... * O(1) = n * O(1) = O(n).

// In recursive factorial function, each individual function call 
// takes constant time because all it does is one multiplication and one function call. 
// Therefore, we say that each function call has a time complexity of O(1).