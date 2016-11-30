//6. Write a program to append the contents of one file at the end of other.

#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *f1,*f2;
char ch;
f1=fopen("file1.dat","r");
f2=fopen("file2.dat","a+");
do
{ch=getc(f1);
  printf("%c",ch);
fprintf(f2,"%",ch);

}while((ch != EOF));
fclose(f1);
fclose(f2);
}
