/*
8. Write�a�program�to�sort�names�in�alphabetic�order�using�array�of�pointers.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void alphabet(int n,char *s[])
{
    int i,j;
    char temp[20];
    for(i=0;i<n-1;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    	  if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[j]);
                strcpy(s[j],s[i]);
                strcpy(s[i],temp);
            }
		}
	}
    return;
}
int main()
{
    char *s[20];
    int i,n=0;
    printf("Enter number of Strings : \n");
    scanf("%d",&n);
    printf("Enter the strings:\n");
    for(i=0;i<n;i++)
    {
        s[i]=(char *)malloc(20*sizeof(char));
        scanf("%s",s[i]);
    }
    alphabet(n,s);
    printf("\nSorted list :\n");
    for(i=0;i<n;i++)
        printf(" %s\n",s[i]);

}
