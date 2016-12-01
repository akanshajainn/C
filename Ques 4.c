//Ques 4.  Write a program to create a structure and a union which have name and age. then find and print the size of structure and union.
#include <stdio.h>
struct person
{
								char name[20];
								int age;
};
union people
{
								char name[20];
								int age;
};
int main()
{
								printf("Structure: %d bytes\nUnion: %d bytes\n",sizeof(struct person),sizeof(union people));
								return 0;
}
