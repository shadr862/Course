#include<stdio.h>
void generateprime(int start,int end);
int isprime(int n);
int main()
{
    int start,end;
    printf("enter two num start to end:");
    scanf("%d%d",&start,&end);
    generateprime(start,end);
    return 0;
}
void generateprime(int start,int end)
{
    printf("prime number between %d to %d are:\n",start,end);
    int i,sum=0;
    for(i=start;i<=end;i++)
    {
        if(isprime(i)){
            printf("%d ",i);
            sum=sum+i/i;
        }
    }
printf("\ntotal prime num between 1 to 100 is %d",sum);
}
int isprime(int n)
{
    int j,flag=1;
    if(n==1)
        flag=0;
    for(j=2;j<=n/2;j++)
    {
        if(n%j==0)
        {
             flag=0;
        break;
        }

    }
    return flag;
}

