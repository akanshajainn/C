/*
   8. Write�a�program�to�sort�names�in�alphabetic�order�using�array�of�pointers.
 */
 #include <stdio.h>
 #include <conio.h>
 #include <string.h>
main()
{
        char name[40][100],temp[20];
        int i,j,n;

        printf("Enter the total number of names\n");

        scanf("%d",&n);
        printf("\nEnter the names one by one.....");
        for(i=0; i<n; i++)
        {
                scanf("%s",name[i]);
        }
        printf("\nNames in alphebetical order\n\n");
        for(i=1; i<n; i++)
        {
                for(j=1; j<n; j++)
                {
                        if((strcmp(name[j-1],name[j]))>0)
                        {
                                strcpy(temp,name[j-1]);
                                strcpy(name[j-1],name[j]);
                                strcpy(name[j],temp);
                        }
                }
        }
        for(i=0; i<n; i++)
                printf("\t%d)%s\n",i+1,name[i]);
        getch();
}
