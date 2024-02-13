#include <iostream>
using namespace std;
#include "dynarr.cpp"

int main()
{
    dynArr<int> d1();
    dynArr<int> d2(5);
    for(int i=0;i<5;i++)
    {
        int n;
        cin>>n;
        d2.setValue(i,n);
    }
    for(int i=0;i<5;i++)
    {
        cout<<d2.getValue(i)<<" ";
    }
    return 0;
}
