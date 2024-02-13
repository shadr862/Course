#include<stdio.h>
int main()
{
    int n,x,i;
    float result=1.0;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter n:");
    scanf("%d",&n);
    if(n>0)
        for(i=1; i<=n; i++)
        {
            result=result*1.0/x;

        }
        else if(n<0)
            n=-1*n;
            for(i=1; i<=n; i++)
            {
                result=result*1.0/x;
            }

        printf("result=%f",result);
        return 0;
    }


