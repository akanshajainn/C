// 9.     Write a program to search an element in array using binary search

#include "stdio.h"

int main(int argc, char const *argv[]) {
        int arr[20], n, i, s, low, high, mid, flag=0;
        printf("Enter the size of the array: ");
        scanf("%d",&n);
        printf("Enter %d elements(in ascending order):\n",n);
        for(i=0; i<n; i++)
                scanf("%d",&arr[i]);
        printf("Enter the search element: ");
        scanf("%d",&s);
        low=0;
        high=n-1;
        while(low<=high)
        {
                mid = (low+high)/2;
                if(s<arr[mid])
                        high = mid-1;
                else if(s>arr[mid])
                        low = mid+1;
                else
                {
                        flag=1;
                        break;
                }
        }
        if(flag==1)
                printf("%d is at position %d",s,mid+1);
        else
                printf("%d not present in array",s);
        return 0;
}
