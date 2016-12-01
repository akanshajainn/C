// 11.   Write a program to sort n numbers using quick sort

#include "stdio.h"
void quicksort(int arr[], int lb, int ub)
{
        int pivot, i, j, temp;
        if(lb < ub)
        {
                pivot = lb;
                i = lb;
                j = ub;
                while(i < j)
                {
                        while(arr[i] <= arr[pivot] &&  i <= ub)
                                i++;
                        while(arr[j] > arr[pivot] && j >= lb)
                                j--;
                        if(i < j)
                        {
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                        }
                }
                temp = arr[j];
                arr[j] = arr[pivot];
                arr[pivot] = temp;
                quicksort(arr, lb, j-1);
                quicksort(arr, j+1, ub);
        }
}
int main(int argc, char const *argv[]) {
        int arr[20], n, i;
        printf("Enter the size of the array: ");
        scanf("%d",&n);
        printf("Enter %d element:\n",n);
        for(i=0; i<n; i++)
                scanf("%d",&arr[i]);
        quicksort(arr, 0, n-1);
        printf("Sorted array:\n");
        for(i = 0; i < n; i++)
                printf("%d\n",arr[i]);
        return 0;
}
