/*
Exercise 1:
Create a pointer to an integer and use it to modify the integer's value.
*/

#include <stdio.h>

int main() {
  int x = 5;
  int *y = &x;
  *y = 6;
  printf("x : %i", x);

  return 0;
}