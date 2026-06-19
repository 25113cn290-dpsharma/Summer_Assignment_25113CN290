// Write a program to Find diagonal sum.

#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter rows in matrix : ");
    scanf("%d",&r);
    printf("Enter column in matrix : ");
    scanf("%d",&c);
    int m1[r][c];
    int sum=0;

    printf("Enter elements in m1 : \n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    scanf("%d",&m1[i][j]);
                }
        }
    
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    if(i==j)
                        {
                            sum=sum+m1[i][j];
                        }
                }
        }

    printf("SUM OF DIAGONALS OF MATRICES IS : %d \n",sum);
        
    return 0;
}