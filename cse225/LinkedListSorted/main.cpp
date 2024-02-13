#include <bits/stdc++.h>
#include"SortedType.cpp"
using namespace std;

void checkEmpty(sortedType<int> s)
{
    if(s.isEmpty())
    {
        cout<<"List is Empty"<<endl;
    }
    else{
        cout<<"List is not Empty"<<endl;
    }
}
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
void checkFull(sortedType<int> s)
{
    if(s.isFull())
    {
        cout<<"List is Full"<<endl;
    }
    else{
        cout<<"List is not Full"<<endl;
    }
}
void checkLength(sortedType<int> s)
{
    cout<<"length is:"<<s.lengthIs()<<endl;
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

     int n1;
     for(int i=1;i<=s.lengthIs();i++)
    {
        s.getNextItem(n1);
        if(i==m)
        {
            s.deleteItem(n1);
        }

    }
s.resetList();

  // s.removeDuplicates();
   print(s);


}
