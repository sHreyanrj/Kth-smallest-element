/******************************************************************************
Given an array arr[] and an integer K where K is smaller than size of array,
the task is to find the Kth smallest element in the given array. 
It is given that all array elements are distinct.
Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[30],x;
    int i,m,j,temp;
    printf("Enter the no of elements to be enterted:\t");
    scanf("%d",&x);
    printf("Enterted elements are:\n");
    for(i=0;i<x;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<x;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nEnter the smallest element:\t");
    scanf("%d",&m);
    for(i=0;i<x;i++)
    {
        if(a[i]==m){
            printf("\n%d smallest element in the given array is %d", i+1,m);
            break;
            }
    }
    if(a[i]!=m)
    printf("\nElement not found");
}
