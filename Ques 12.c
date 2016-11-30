//12.   write a program to read a file and display its contents on the screen
#include<stdio.h>
int main()
{
  FILE *f;
  char ch;
  f=fopen("new.txt","r");
  if(f==NULL)
  {
    printf("Cannot open file");

  }
  else
  {
    while(!feof(f))
    {
      ch=fgetc(f);
      printf("%c",ch);

    }
  }

}
