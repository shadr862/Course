#include<stdio.h>
int main()
{
    char A[30],B[30];
    printf("for A:");
    gets(A);
    int i,j,len=0;
    for(i=0;A[i]!='\0';i++)
    {
        len++;
    }
    for(i=0,j=len-1;j>=0;i++,j--)
    {
        B[i]=A[j];
    }
    B[i]='\0';
    //puts(A);
    //puts(B);
    int d=strcmp(A,B);
    if(d==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }





}
