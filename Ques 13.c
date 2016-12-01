// 13.   write a program that will read a file and count how many characters , spaces, tabs and newlines are present in it

#include "stdio.h"

int main(int argc, char const *argv[]) {
        FILE *f1;
        char ch;
        int l=0,t=0,s=0,c=0;
        f1=fopen("test.txt","r");
        while ((ch = fgetc(f1)) != EOF)
                printf("%c",ch);
        fclose(f1);
        f1=fopen("test.txt","r");
        while(1)
        {
                ch=fgetc(f1);
                if(ch==EOF)
                        break;
                c++;
                if(ch==' ')
                        s++;
                if(ch=='\n')
                        l++;
                if(ch=='\t')
                        t++;
        }
        fclose(f1);
        printf("\n Number of characters = %d",c);
        printf("\n Number of blanks = %d",s);
        printf("\n Number of tabs = %d",t);
        printf("\n Number of lines = %d",l);
        return 0;
}
