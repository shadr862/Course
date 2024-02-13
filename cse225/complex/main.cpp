#include <iostream>

using namespace std;
#include "complex.h"
int main()
{
    complex c1(1,-2);
    complex c2(-2,4);
    complex result=c1-c2;
    complex result1=c1-6;
    complex result2=7-c2;
    result.print();
    result1.print();
    result2.print();
    complex r=c1*c2;
    complex r1=c1*2;
    complex r2=c2*3;
    r.print();
    r1.print();
    r2.print();
    cout<<"for != operator"<<endl;
    if(c1 != c2)
    {
        cout<<"two complex num are not Equal"<<endl;
    }
    else{
        cout<<"two complex num are  Equal"<<endl;
    }
    complex c3(3,3);
    complex c4(3,3);

    cout<<"for == operator"<<endl;
    if(c3==c4)
    {
        cout<<"two complex num are Equal"<<endl;
    }
    else{
            cout<<"two complex num are not Equal"<<endl;

    }

    return 0;
}
