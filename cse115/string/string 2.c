#include<stdio.h>
int stringlen(char A[]);
int com(char s1[],char s2[]);
int main()
{
    char s1[20],s2[20];
    int L1,L2,c;
    gets(s1);
    gets(s2);
    L1=stringlen(s1);
    L2=stringlen(s2);
    c= com(s1,s2);
    if(L1>L2||L1<L2)
    {
        printf("string are not equal");
    }
    else if(c==1)
    {
        printf("equal");
    }
    else if(c==0)
    {
        printf("not equal");
    }


}
int stringlen(char A[])
{
    int i,len=0;
    for(i=0; A[i]!='\0'; i++)
    {
        len++;
    }
    return len;
}
int com(char s1[],char s2[])
{
    int i=0,flag=1;
    while(s1[i]!='\0'&&s2[i]!='\0')
    {
        if(s1[i]>s2[i]||s1[i]<s2[i])
        {
            flag=0;
            break;
        }
        else
            i++;
    }
    return flag;

}
