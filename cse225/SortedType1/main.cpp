#include <bits/stdc++.h>
#include"SortedType.cpp"
using namespace std;


void print(sortedType<int> s)
{
    int n;
    for(int i=0;i<s.lengthIs();i++)
    {
        s.getNextItem(n);
        cout<<n<<" ";
    }
    cout<<endl;
    s.resetList();
}


int main()
{
    sortedType<int> s;
    int n;
    cin>>n;
    int m;
    if(n%2==0)
    {
        m=n/2;
        m++;
    }
    else
    {
        m=n/2;
        m++;
    }
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        s.insertItem(t);
    }



   s.removeDuplicates();
   print(s);


}
