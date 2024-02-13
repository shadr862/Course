#include<stdio.h>
int main()
{
      char op;
    printf("enter +-*/:");
    scanf("%c",&op);
    int a,b;
    printf("enter a,b:");
    scanf("%d%d",&a,&b);
    switch(op)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    default :
        printf("different");
    }
    return 0;
}

