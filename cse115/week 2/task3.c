#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    switch(n)
    {
case 1:
    printf("sat");
    break;
case 2:
    printf("sun");
    break;
case 3:
    printf("mon");
    break;
case 4:
    printf("tues");
    break;
case 5:
    printf("wed");
    break;
case 6:
    printf("thus");
    break;
case 7:
    printf("fri");
    break;
default :
    printf("different");
    }
    return 0;
}
