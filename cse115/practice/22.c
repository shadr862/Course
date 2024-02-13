#include<stdio.h>
#include<math.h>
int main()
{
int b,a,c;
float root1,root2;
printf("enter b and a,c");
scanf("%d%d%d",&b,&a,&c);
int dise=pow(b,2)-4*a*c;
if(dise>0)
{
    root1=(-b+dise)/2.0*a;
    root2=(-b-dise)/2.0*a;
    printf("root1=%3.2f",root1);
     printf("\nroot2=%3.2f",root2);
}
else
    printf("undifine");
}
