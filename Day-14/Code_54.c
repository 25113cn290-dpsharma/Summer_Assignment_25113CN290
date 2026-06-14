// Write a program to Frequency of an element.

#include<stdio.h>
int main()
    {
        int arr[100],i,n,f,count=0;
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
                        count++;
                    }
            }
        printf("FREQUENCY OF %d is %d\n",f,count);
        
        return 0;
    }