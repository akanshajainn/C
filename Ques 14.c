//14.   Suppose a file contains student’s records with each record containing name and age of a student. Write a program to read these records and display them.
#include <stdio.h>
int main()
{
    FILE *f1;
    char ch;
    f1 = fopen("source.txt", "r");
    printf("Record of the students :\n\n");
    while ((ch = fgetc(f1)) != EOF)
        printf("%c",ch);
    fclose(f1);
    return 0;
}
