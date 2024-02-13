#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        for(j=1,k=n;j<=i;j++,k--)
        {
         printf("%d",k);
        }
        printf("\n");
    }
}
