// Ques 1. Write a program to find factorial of a number and generate Fibonacci series using recursion

#include "stdio.h"

int main(int argc, char const *argv[]) {
  int factorial=1, i=0, count=0;
  printf("Enter number to calculate factorial and generate Fibonacci series.\n");
  scanf("%d",&count);
  for (i = 1; i <= count; i++) {
    factorial = i*factorial;
  }
  printf("Factorial is  = %d\n",factorial);
  return 0;
}
