#include<stdio.h>
void circle(int* r);
int main()
{
    int r;
    printf("enter r:");
    scanf("%d",&r);
    circle(&r);
    return 0;
}
void circle(int* r)
{
    float area,perimeter;
    area=3.1416*(*r)*(*r);
    perimeter=2*3.1416*(*r);
    printf("area=%f\n",area);
    printf("peremeter=%f",perimeter);
}
