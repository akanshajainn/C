//6. Write a program to append the contents of one file at the end of other.

#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *f1,*f2;
  char ch=0;
  f1=fopen("file1.txt","r");
  f2=fopen("file2.txt","a+");

 printf("File 1 is \n ");
 
  while(getc(f1)!=feof(f1))

  {printf("%c",getc(f1));
  }
  
  printf("File 2 is \n");

  while(getc(f2)!=feof(f2)){
   printf("%c",getc(f2));
  }

while ( ch=fgetc(f1)!=feof(f1)) {
 
  fputc(ch,f2);
}


 printf("File append done successfully \n");
 while(getc(f2)!=feof(f2)){
   printf("%c",getc(f2));
 }

  
  fclose(f1);
  fclose(f2);

}
