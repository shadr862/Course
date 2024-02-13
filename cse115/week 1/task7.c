//fahrenheit to celcius
#include<stdio.h>
int main()
{
    int f;
    float c;
    printf("enter f:");
    scanf("%d",&f);
    c=(f-32)*5/9.0;
    printf("c=%f",c);
    return 0;
}
