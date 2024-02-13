#include<stdio.h>
typedef struct com
{
    float r;
    float im;
}c;
c add(c n1,c n2);
int main()
{
    c n1,n2,result;
    printf("enter for n1:\n");
    scanf("%f%f",&n1.r,&n1.im);
     printf("enter for n2:\n");
    scanf("%f%f",&n2.r,&n2.im);
    result=add(n1,n2);
    printf("sum=%.2f+%.2fi",result.r,result.im);
}
c add(c n1,c n2)
{
    c t;
    t.r=n1.r+n2.r;
    t.im=n1.im+n2.im;
    return t;
}
