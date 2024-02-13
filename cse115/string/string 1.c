#include<stdio.h>
int stringlen(char A[]);
int main()
{
    char s1[20],s2[20];
    int L1,L2;
    gets(s1);
    gets(s2);
    L1=stringlen(s1);
    L2=stringlen(s2);
    if(L1>L2)
        puts(s2);
    else
        puts(s1);
}
int stringlen(char A[])
{
    int i,len=0;
    for(i=0;A[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
