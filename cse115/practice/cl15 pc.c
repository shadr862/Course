#include<stdio.h>
void f1()
{
    printf("\nhello");

}
void f2(int x)
{
    printf("%d\n",x);

}
int main()
{
    void (*fp0) ();
    void (*fp1) (int);
    fp0=&f1;
    fp1=&f2;
    fp1(2);
    fp0();
}
