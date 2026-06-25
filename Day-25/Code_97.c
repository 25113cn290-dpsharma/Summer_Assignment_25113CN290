// Write a program to Merge two sorted arrays.

#include<stdio.h>
int main()
{
    int i,j=0,n1,n2,temp;
    printf("Enter no of elements in array 1 : ");
    scanf("%d",&n1);
    printf("Enter no of elements in array 2 : ");
    scanf("%d",&n2);

    int arr1[n1],arr2[n2],arr3[100];

    printf("Enter sorted array 1 : \n");
    for(i=0;i<n1;i++)
        {
            scanf("%d",&arr1[i]);
        }
    printf("Enter sorted array 2 : \n");
    for(i=0;i<n2;i++)
        {
            scanf("%d",&arr2[i]);
        }

    for(i=0;i<n1;i++)
        {
            arr3[i]=arr1[i];
        }
    for(i=n1;i<n1+n2;i++)
        {
            arr3[i]=arr2[j++];
        }
    for(i=0;i<n1+n2-1;i++)
        {
            for(j=i+1;j<n1+n2;j++)
                {
                    if(arr3[i]>arr3[j])
                        {
                            temp=arr3[i];
                            arr3[i]=arr3[j];
                            arr3[j]=temp;
                        }
                }   
        }
    printf("Merged array : ");
    for(i=0;i<n1+n2;i++)
        {
            printf("%d ",arr3[i]);
        }
    return 0;
}