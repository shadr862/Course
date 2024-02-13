#include<stdio.h>
#include<string.h>
int countvowels(char sentence[]);
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
int countvowels(char sentence[])
{
    int i,count=0;
    for(i=0;sentence[i]!='\0';i++)
    {
        if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u'||sentence[i]=='A'||sentence[i]=='E'||sentence[i]=='I'||sentence[i]=='O'||sentence[i]=='U')
        {
            count++;
        }
    }
    return count;
}

