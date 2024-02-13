#include<stdio.h>
int ispalindrome(int n);
int main()
{
   int n,p;
   printf("enter n:");
   scanf("%d",&n);
   p= ispalindrome(n);
   printf("%d",p);
   if(p==1)
    printf("%d is a palindrome",n);
   else
    printf("%d is not a palindrome",n);
}
int ispalindrome(int n)
{
    int i,rev=0,flag=0,t=n;
    for(i=1;n!=0;i++)
    {
       rev=rev*10;
       rev=rev+(n%10);
       n=n/10;
    }
    if(rev==t)
        flag=1;
    return flag;
}

