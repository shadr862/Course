#include<stdio.h>
int stringlen(char A[]);
int main()
{
    char s1[20],s2[20];
    int L1,L2,i=0;
    gets(s1);
    gets(s2);
    L1=stringlen(s1);
    L2=stringlen(s2);
    if(L1>L2)
    {
      printf("string are equal");
    }
        else if(L1==L2)
        {
            while(s1[i]!='\0'&&s2[i]!='\0')
            {
                if(s1[i]>s2[i]||s1[i]<s2[i])
                {
                    printf("string are ont");
                    break;
                }
                else
                {
                    printf("string are equal");
                }
            }

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

