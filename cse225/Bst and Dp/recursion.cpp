#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int fib(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
     return fib(n-1)+fib(n-2);

}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
        return n*factorial(n-1);
}
int sumOfDigits(int x)
{
    if(x==0)
        return 0;
    else
        return x%10+sumOfDigits(x/10);
}
int DecToBin(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
        return n%2+10*DecToBin(n/2);
}
float sum(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
        return 1/pow(2,n)+sum(n-1);


}
int findMin(int a[], int size)
{
    if(size==1)
        return a[0];

    return min(a[size-1],findMin(a,size-1));
}
int main()
{
    int n,r;
    cin>>n;
    r=fib(n);
    cout<<r<<endl;
    cin>>n;
    r=sumOfDigits(n);
    r=sumOfDigits(n);
    cout<<r<<endl;
    cin>>n;
    r=factorial(n);
    cout<<r<<endl;
    cin>>n;
    r=DecToBin(n);
    cout<<r<<endl;
    cin>>n;
    float r1=sum(n);
    cout<<r1<<endl;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    r=findMin(a,n);
    cout<<r<<endl;


}
