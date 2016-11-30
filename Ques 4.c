#include<stdio.h>
 struct trial
 {
 char nameu[10];
 int age;

 }trial;

 union trialu
 {
 char name[10];
 int ageu;
 }trialu;



int main()

{
printf("Memory size occupied by a structure is %lu \n",sizeof(trial));
printf("Memory size occupied by a union is %lu \n",sizeof(trialu));



}
