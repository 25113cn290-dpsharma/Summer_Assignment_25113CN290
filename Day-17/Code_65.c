// Write a program to Merge arrays.

#include<stdio.h>
int main()
{
    int n1,n2,i,arr1[100],arr2[100],arr3[100];
    
    printf("Enter the no of elements in array 1 : ");
    scanf("%d",&n1);

    printf("Enter the no of elements in array 2 : ");
    scanf("%d",&n2);

    printf("Enter elements in array 1 : \n");
    for(i=0;i<n1;i++)
        {
            scanf("%d",&arr1[i]);
        }
    printf("Enter elements in array 2 : \n");
    for(i=0;i<n2;i++)
        {
            scanf("%d",&arr2[i]);
        }

    for(i=0;i<n1;i++)
        {
            arr3[i]=arr1[i];
        }

    for(i=0;i<n2;i++)
        {
            arr3[n1+i]=arr2[i];
        }

    printf("MERGED ARRY : ");
    for(i=0;i<n1+n2;i++)
        {
            printf("%d ",arr3[i]);
        }

    return 0;
}