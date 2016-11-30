//8. Write a program to sort names in alphabetic order using array of pointers.
#include <stdio.h>
//#include<malloc.h>
#include<string.h>
#define MAX 20
int main ()
{
   char *names[MAX],*temp=NULL;
   int i,j,n,flag=1;
   printf("Enter the number of strings: ");
   scanf("%d",&n);
   printf("Enter the strings:\n");
   for(i=0;i<n;i++)
   {
   names[i]=(char*)calloc(MAX,sizeof(char));
   scanf("%s",&names[i]);
   }
   for(i=0;i<n;i++)
   {
    flag=0;
    for(j=0;j<n-i;j++)
    {
      if(strcmp(names[j],names[j+1])>0)
      {
        temp=names[j];
          names[j]=names[j+1];
          names[j+1]=temp;

    }
    }
   }
   printf("\nStrings in sorted order:\n");
   for(j=0;j<n;j++)
      printf("%s\n",names[j]);
   return 0;
}
