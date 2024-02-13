#include<stdio.h>
float calTotal(int n);
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    float s=calTotal(n);
    printf("%f",s);
}
float calTotal(int n)
{
    int i;
    float sum=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            sum=sum+(1.0/i);
        }
        else
        {
            sum=sum-(1.0/i);
        }
    }
    return sum;
}
