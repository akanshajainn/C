// Ques 1. Write a program to find factorial of a number and generate Fibonacci series using recursion

#include "stdio.h"

int fact(unsigned int i){
  if(i<=1){
    return 1;
  }
  return i * fact(i-1);
}

int main(int argc, char const *argv[]) {
  int i;
  printf("Enter number to calculate factorial and generate Fibonacci series.\n");
  scanf("%d",&i);
  printf("Factorial is  = %d\n",fact(i));
  return 0;
}
