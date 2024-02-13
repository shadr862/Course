#include<stdio.h>
int main()
{
    int i,j,n,sum,count=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
    if(sum==i)
    {
        count++;
    }

    }
printf("%d",count);
}
