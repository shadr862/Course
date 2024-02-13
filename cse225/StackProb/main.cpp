#include <iostream>
#include"StackType.cpp"
using namespace std;
void solve (StackType<int> A,StackType<int> B,int x)
{
    int r=0;
    if(x<A.Top()&&x<B.Top())
    {
        cout<<0<<endl;
        return ;
    }
    while(1)
    {
        if(A.Top()>B.Top())
        {
            x=x-B.Top();
            B.pop();
        }
        else{
            x=x-A.Top();
            A.pop();
        }
        if(x>-1)
        {
            r++;
        }
        else{
            break;
        }
    }
    cout<<r<<endl;
}

int main()
{
    StackType<int> A,B;
    int x,a,b;
    cin>>a>>b>>x;
    for(int i=0;i<a;i++)
    {
        int n;
        cin>>n;
        A.push(n);
    }
    for(int i=0;i<b;i++)
    {
        int n;
        cin>>n;
        B.push(n);
    }
    solve(A,B,x);



    return 0;
}
