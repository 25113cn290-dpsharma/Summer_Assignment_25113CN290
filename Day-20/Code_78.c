// Write a program to Check symmetric matrix.

#include<stdio.h>
int main()
{
    int i,j,r,flag=0;
    printf("Enter rows and columns in matrix  : ");
    scanf("%d",&r);
    int m1[r][r];
    int trans[r][r];

    printf("Enter elements in m1 : \n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
                {
                    scanf("%d",&m1[i][j]);
                }
        }
    
    for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
                {
                    trans[j][i]=m1[i][j];
                }
        }

    for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
                {
                    if(trans[i][j]!=m1[i][j])
                        {
                            flag=1;
                        }
                }
        }
    
    if(flag==0)
        {
            printf("SYMMETRIC MATRIX\n");
        }
    else
        {
            printf("NOT A SYMMETRIC MATRIX\n");
        }
    return 0;
}