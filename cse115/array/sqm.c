#include<stdio.h>
int main()
{
    int i,j,n,sum=0,innersum=0,ts;
    int A[100][100];
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
         {
              scanf("%d",&A[i][j]);
         }
    }
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++){
        printf("%d\t",A[i][j]);
        sum=sum+A[i][j];
         }
          printf("\n");
    }
    for(i=1;i<n-1;i++)
    {
         for(j=1;j<n-1;j++){
        innersum=innersum+A[i][j];
         }
          printf("\n");
    }
printf("\noutersum=%d",sum);
printf("\ninnersum=%d",innersum);
printf("\nsum=%d",ts=sum-innersum);
return 0;
}
