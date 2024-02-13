#include<stdio.h>
int main()
{
    int i,j;
    int A[40][60];
    int B[90][67];
    int C[70][90];
    printf("for A:");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nfor B:");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }

    }
    printf("\nA=\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nB=\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }
    printf("\nC=\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
}
