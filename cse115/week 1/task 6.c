#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    float average;
    average=(a+b+c)/3.0;
    printf("average=%.2f",average);
    return 0;
}
