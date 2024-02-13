#include<stdio.h>
int main()
{
    int A[100],i,n,j,t;
    printf("enter n:");
    scanf("%d",&n);
    printf("\nFor A:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("%d,",A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }
    printf("\nascending:\n");
    for(i=0;i<n;i++)
    {
        printf("%d,",A[i]);
    }
}
