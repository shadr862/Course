#include<stdio.h>
int main()
{
    int a,b,t;
    printf("enter a,b:");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("after swap:a=%d ,b=%d",a,b);

    return 0;
}

