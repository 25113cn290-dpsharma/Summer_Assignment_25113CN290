// Write a program to Multiply matrices.

#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2;
    printf("Enter rows in matrix 1 : ");
    scanf("%d",&r1);
    printf("Enter column in matrix 1 : ");
    scanf("%d",&c1);
    int m1[r1][c1];
    printf("Enter rows in matrix 2 : ");
    scanf("%d",&r2);
    printf("Enter column in matrix 2 : ");
    scanf("%d",&c2);
    int m2[r2][c2];

    printf("Enter elements in m1 : \n");
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                {
                    scanf("%d",&m1[i][j]);
                }
        }
    printf("Enter elements in m2 : \n");
    for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                {
                    scanf("%d",&m2[i][j]);
                }
        }
    
    int result[r1][c2];
    
    if(c1!=r2)
        {
            printf("CAN'T BE MULTIPLIED\n");
        }
    else
        {
            for(i=0;i<r1;i++)
                {
                    for(j=0;j<c2;j++)
                        {
                            result[i][j]=0;
                        }
                }
            
            for(i=0;i<r1;i++)
                {
                    for(j=0;j<c2;j++)
                        {
                            for(k=0;k<c1;k++)
                                {
                                    result[i][j]=result[i][j]+(m1[i][k]*m2[k][j]);
                                }
                        }
                }
        printf("Resultant Matrix:\n");
        for(i=0;i<r1;i++)
            {
                for(j=0;j<c2;j++)
                    {
                        printf("%d ",result[i][j]);
                    }
                printf("\n");
            }
        }

return 0;

}