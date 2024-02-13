#include<stdio.h>
int rev(int );
int main()
{
 int num,result;
 printf("Enter any number : ");
 scanf("%d", &num);
 result = rev(num);
 printf("Reverse order number = %d",result);
 return 0;
}
int rev(int n)
{
int reverse=0;
    while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }
 return reverse;
}

