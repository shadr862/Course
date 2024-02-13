#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,d,l,l1,d1;
    printf("Enter the size of string:");
    scanf("%d",&n);
    char bigstr[1000]="",str[100];
    fflush(stdin);
    printf("Enter the string:");
    while(1)
    {
        fflush(stdin);
        gets(str);
        d=strcmp(str,"quit");
        if(d==0)
        {
            break;
        }
        l=strlen(str);
        strcat(str,"\n");
        strcat(bigstr,str);
        if(strlen(bigstr)==n)
        {
            break;
        }
    }
    printf("%s",bigstr);
    return 0;
}
