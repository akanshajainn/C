// 15.  Write a C program to read a one dimensional array, print sum of all elements along with inputted array elements using Dynamic Memory Allocation also deallocate after use.

#include "stdio.h"
#include "malloc.h"

int main(int argc, char const *argv[]) {
        int *a,n,i,sum=0;
        printf("Enter the number of elements: ");
        scanf("%d",&n);
        a = (int*)calloc(n,sizeof(int));
        printf("Enter %d elements:\n",n);
        for(i=0; i<n; i++)
        {
                scanf("%d",(a+i));
                sum += *(a+i);
        }
        printf("Sum of the elements is %d\n",sum);
        free(a);
        printf("Contiguous memory has been freed");
        return 0;
}
