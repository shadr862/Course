#include"complex.h"
#include<iostream>
using namespace std;
complex::complex()
{
    real=0;
    imaginary=0;
}
complex::complex(int a,int i)
{
    real=a;
    imaginary=i;
}
complex operator-(complex a,complex b)
{

    complex sub;
    sub.real=a.real-b.real;
    sub.imaginary=a.imaginary-b.imaginary;
    return sub;
}
complex operator-(complex a,int x)
{

    complex sub;
    sub.real=a.real-x;
    sub.imaginary=a.imaginary;
    return sub;
}
complex operator-(int x,complex a)
{

    complex sub;
    sub.real=x-a.real;
    sub.imaginary=a.imaginary;
    return sub;
}
complex operator*(complex a,complex b)
{
    complex multi;
    multi.real=(a.real*b.real)-(a.imaginary*b.imaginary);
    multi.imaginary=(a.real*b.imaginary)+(a.imaginary*b.real);
    return multi;
}
complex operator*(complex a,int x)
{
    complex multi;
    multi.real=a.real*x;
    multi.imaginary=a.imaginary*x;
    return multi;
}
complex operator*(int x,complex a)
{
    complex multi;
    multi.real=a.real*x;
    multi.imaginary=a.imaginary*x;
    return multi;
}
bool operator==(complex a,complex b)
{

    if((a.real==b.real)&&(a.imaginary==b.imaginary))
    {
        return true;
    }
    return false;
}
bool operator!=(complex a,complex b)
{
     if((a.real!=b.real)||(a.imaginary!=b.imaginary))
    {
        return true;
    }
    return false;
}
void complex::print()
{
    if(imaginary<0)
    {

        cout<<real<<imaginary<<"i"<<endl;
    }
    else{
        cout<<real<<"-"<<imaginary<<"i"<<endl;
    }

}
