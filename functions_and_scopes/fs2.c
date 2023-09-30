/*
Exercise 2:
Write a C program that has a global variable. Create multiple functions that perform different operations using this global variable.
*/

#include <stdio.h>

// Global variable declaration
int globalVar = 10;

// Function to increment the global variable
void incrementGlobalVar() {
    globalVar++;
}

// Function to print the global variable
void printGlobalVar() {
    printf("Global variable value: %d\n", globalVar);
}

int main() {
    // Print the initial value of the global variable
    printGlobalVar();
    
    // Increment the global variable
    incrementGlobalVar();
    
    // Print the incremented value
    printGlobalVar();
    
    return 0;
}
