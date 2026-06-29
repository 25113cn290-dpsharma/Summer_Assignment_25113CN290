// Write a program to Create menu-driven calculator.

#include<stdio.h>

void addition()
{
    int a,b,sum;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("SUM = %d\n",sum);
}

void subtraction()
{
    int a,b,diff;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    diff=a-b;
    printf("SUBTRACTION = %d\n",diff);
}

void multiplication()
{
    int a,b,product;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    product=a*b;
    printf("MULTIPLICATION = %d\n",product);
}

void division()
{
    int a,b,div;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    if(b==0)
    {
        printf("Can't divide by zero.\n");
    }
    else
    {
        div=a/b;
        printf("DIVISION = %d\n",div);
    }
}

int main()
{
    int choice;
    do
    {
    printf("\n\n=======CALCULATOR=======\n\n");
    printf("1. ADDITION\n");
    printf("2. SUBTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");
    printf("5. EXIT\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            addition();
            break;
        
        case 2:
            subtraction();
            break;

        case 3:
            multiplication();
            break;

        case 4:
            division();
            break;
        
        case 5:
            printf("THANK YOU \n");
            break;
        
        default:
            printf("INVALID CHOICE \n");
    }
    }
    while(choice!=5);
    
    return 0;
}