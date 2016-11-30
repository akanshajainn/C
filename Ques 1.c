// Ques 1. Write a program to find factorial of a number and generate Fibonacci series using recursion

#include "stdio.h"

int fact(unsigned int i){
  if(i<=1){
    return 1;
  }
  return i * fact(i-1);
}

int fibonacci(int i) {

   if(i == 0) {
      return 0;
   }

   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);
}

int main(int argc, char const *argv[]) {
  int i ,count = 0;
  printf("Enter number to calculate factorial and generate Fibonacci series.\n");
  scanf("%d",&i);

  printf("Factorial is  = %d\n",fact(i));
  count =i;
  for (i = 0; i < count; i++) {
     printf("%d\t", fibonacci(i));
  }
  return 0;
}
