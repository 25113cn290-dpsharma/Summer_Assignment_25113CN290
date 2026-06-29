// Write a program to Create menu-driven array operations system.

#include <stdio.h>

int arr[100], n;
void input()
{
    int i;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    printf("Enter %d elements :\n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void display()
{
    int i;
    if(n==0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void sum()
{
    int i, s=0;

    if(n == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    for(i=0;i<n;i++)
    {
        s+=arr[i];
    }

    printf("Sum = %d\n",s);
}

void largest()
{
    int i,max;

    if(n==0)
    {
        printf("Array is empty.\n");
        return;
    }

    max=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    printf("Largest element = %d\n",max);
}

int main()
{
    int choice;
    n = 0;
    do
    {
        printf("\n\n===== ARRAY OPERATIONS =====\n\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Find Sum\n");
        printf("4. Find Largest Element\n");
        printf("5. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                input();
                break;

            case 2:
                display();
                break;

            case 3:
                sum();
                break;

            case 4:
                largest();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } 
    while(choice != 5);
    return 0;
}