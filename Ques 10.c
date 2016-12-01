//10.   Write a program to sort n numbers using insertion sort
#include <stdio.h>
int main()
{
        int n,i,j,key;
        printf("size of the array \n");
        scanf("%d",&n);
        int arr[n];
        printf("Enter array \n");
        for(i=0; i<n; i++)
                scanf("%d",&arr[i]);

        for(i=1; i<n; i++)
        {
                key=arr[i];
                j=i-1;
                while(j>=0 & arr[j]>key)
                {
                        arr[j+1]=arr[j];
                        j=j-1;
                }
                arr[j+1]=key;
        }
        printf("Sorted array is \n");
        for(i=0; i<n; i++)
                printf("%d",arr[i]);

}
