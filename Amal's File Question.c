// File Question


#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("input.dat","w");
	f2=fopen("out.dat","w");
	fprintf(f1,"entered into file 1");
	fprintf(f2,"entered int file 2");
	fclose(f1);
	fclose(f2);
	f1=fopen("input.dat","a");
	f2=fopen("out.dat","r");
	if(f1==NULL||f2==NULL)
	{
		printf("unable to open");
		//exit 0;
	}
	do
	{
		ch=fgetc(f2);
		fputc(ch,f1);
	}
	while(ch!=EOF);
	fclose(f1);
	fclose(f2);
	  f1 = fopen("input.dat", "r");
 if (f1 == NULL)
    {
        printf("Cannot open file \n");
    //    exit 0;
    }

    // Read contents from file
    ch = fgetc(f1);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(f1);
    }

    fclose(f1);
    return 0;
}
