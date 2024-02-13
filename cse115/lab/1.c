#include<stdio.h>
#include<string.h>
int countvowels(char *ptr);
int main()
{
    char s[30];
    printf("enter sentence:");
    gets(s);
    int v;
    v=countvowels(s);
    printf("vowel=%d",v);
    return 0;
}
int countvowels(char *ptr)
{
    int i,count=0;
    for(i=0;ptr[i]!='\0';i++)
    {
        if(ptr[i]=='a'||ptr[i]=='e'||ptr[i]=='i'||ptr[i]=='o'||ptr[i]=='u'||ptr[i]=='A'||ptr[i]=='E'||ptr[i]=='I'||ptr[i]=='O'||ptr[i]=='U')
        {
            count++;
        }
    }
    return count;
}


