// 7. Write a program to swap 2 numbers using pointer

#include "stdio.h"

int main(int argc, char const *argv[]) {
  int a,b,*p,*q;
	printf("Enter the numbers: ");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	printf("%d %d\n",*p,*q);
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	printf("\n%d %d\n",*p,*q);
  return 0;
}
