#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the num of n:");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
        printf("%d is perfect number!",n);
    else
        printf("%d is not perfect number!",n);

    return 0;

}
