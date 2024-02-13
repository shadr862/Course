#include<stdio.h>
int main()
{
    int i,n,low1=1001,low2=1002;
    for(i=1;i<=5;i++)
    {
        printf("enter n:");
        scanf("%d",&n);
        low2=low1;
        if(low1>n)
        {
            low1=n;
        }
        else if(n>low1)
        {
            low2=n;
        }
        else if(n<low2)
        {
            low2=n;
        }

    }
    printf("low1=%d\nlow2=%d",low1,low2);
}
