#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",n);
    if(n>=90)
        printf("ur grade is A");
    else if(n>=80&&n<90)
        printf("ur grade is A-");
    else if(n>=70&&n<80)
        printf("ur grade is B");
    else
        printf("fail");
    return 0;
}
