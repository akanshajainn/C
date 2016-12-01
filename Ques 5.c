// 5. Write a menu driven program to compare, concatenate ,copy 2 strings

#include "stdio.h"
int main(int argc, char const *argv[]) {
        int c;
        char s1[20],s2[20];
        printf("Enter the two strings:\n");
        scanf("%s[^\t\n]s",s1);
        scanf("%s[^\t\n]s",s2);
        printf("Choose 1 to Compare two strings\nChoose 2 to Concatenate two strings\nChoose 3 to Copy one string into another\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1: {
                if(strcmp(s1,s2) == 0) {
                        printf("The two strings are equal");
                }
                else{
                        printf("The two strings are unequal");
                }
                break;
        }
        case 2: {
                strcat(s1,s2);
                printf("The concatenated string is %s",s1);
                break;
        }
        case 3: {
                printf("Strings before copying: %s %s\n",s1,s2);
                strcpy(s1,s2);
                printf("Strings after copying: %s %s",s1,s2);
                break;
        }
        default: {
                printf("Invalid Option");
                break;
        }
        }
        return 0;

}
