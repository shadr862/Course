#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A')
        printf("u pressed A");
    else if(ch=='b'||ch=='B')
        printf("u pressed B");
    else if(ch=='c'||ch=='C')
        printf("u pressed C");
    else
        printf("u pressed different key");
    return 0;


}
