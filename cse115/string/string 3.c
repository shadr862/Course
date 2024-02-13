#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],B[50];
    printf("for A:");
    gets(A);
    printf("for B:");
    gets(B);
    strcat(A,B);
    puts(A);
}
