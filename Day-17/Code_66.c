// Write a program to Union of arrays.

#include<stdio.h>
int main()
{
    int n1,n2,i,arr1[100],arr2[100],found,j;
    
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

    printf("UNION OF ARRAY : ");

    for(i=0; i<n1;i++)
    {
        printf("%d ", arr1[i]);
    }

    for(i=0;i<n2;i++)
    {
        found = 0;
        for(j=0;j<n1;j++)
        {
            if(arr2[i]==arr1[j])
            {
                found=1;
                break;
            }
        }

        if(found==0)
        {
            printf("%d ", arr2[i]);
        }
    }

    return 0;
}