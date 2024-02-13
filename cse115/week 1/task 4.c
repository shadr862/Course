#include<stdio.h>
#include<math.h>
int main()
{
    float const pi=3.1416;
    float radius,area,circum,diameter;
    printf("enter radius:");
    scanf("%f",&radius);
    diameter=2*radius;
    circum=2*pi*radius;
    area=pi*pow(radius,2);
    printf("diameter is=%f\n",diameter);
    printf("circum is=%f\n",circum);
    printf("area is=%f\n",area);
                   return 0;
}
