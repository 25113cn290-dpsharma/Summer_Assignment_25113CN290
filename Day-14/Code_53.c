// Write a program to Linear search.

#include<stdio.h>
int main()
    {
        int arr[100],i,n,f,flag=0;
        printf("Enter the number of elements : ");
        scanf("%d",&n);

        printf("Enter the elements : \n");
        for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
        
        printf("Enter the element to by found : ");
        scanf("%d",&f);

        for(i=0;i<n;i++)
            {
                if(f==arr[i])
                    {
                        printf("FOUND AT %d\n",i+1);
                        flag=1;
                        break;
                    }
            }
        if(flag == 0)
            {
                printf("Element not found.\n");
            }

        return 0;

    }