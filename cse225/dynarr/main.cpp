#include <iostream>
using namespace std;

#include "dynarr1.cpp"
int main()
{

    int row,col;
    cin>>row>>col;
    dynArr1<int> ar1();
    dynArr1<int> ar(row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            int n1;
            cin>>n1;
            ar.setValue(i,j,n1);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

            cout<<ar.getValue(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
