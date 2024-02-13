#include <iostream>
#include<string>
#include"StackType.cpp"
using namespace std;
void checkEmpty(StackType<int> s)
{
    if(s.isEmpty())
    {
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }
}
void checkFull(StackType<int> s)
{
    if(s.isFull())
    {
        cout<<"Stack is full"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }
}
void print(StackType<int> s)
{
    StackType<int> aux;
    while(!s.isEmpty())
    {
        aux.push(s.Top());
        s.pop();
    }
    while(!aux.isEmpty())
    {
        cout<<aux.Top()<<" ";
        s.push(aux.Top());
        aux.pop();
    }
    cout<<endl;
}
int findMax(StackType<int> s)
{
    int mx=s.Top();
    while(!s.isEmpty())
    {
        if(mx<s.Top())
        {
            mx=s.Top();
        }
        s.pop();
    }
    return mx;

}
bool isblanced(string str)
{
    StackType<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(')
        {
            s.push('(');
        }
        else if(str[i]==')')
            {
                if(s.isEmpty())
                {

                    return false;
                }
                else{
                    s.pop();
                }

        }


    }
    if(s.isEmpty())
    {
        return true;
    }
    else{
        return false;
    }
}
void frquency(StackType<int> s)
{
    int arr[100000]={0};
    StackType<int> aux;
      while(!s.isEmpty())
    {
        arr[s.Top()]++;
        aux.push(s.Top());
        s.pop();
    }

    while(!aux.isEmpty())
    {
        int i=aux.Top();
        if(arr[i]>0)
        {
            cout<<i<<"="<<arr[i]<<endl;
            arr[i]=0;
        }
        s.push(i);
        aux.pop();
    }
}
int main()
{

    StackType<int> s;
    checkEmpty(s);
    int n;
    for(int i=0;i<4;i++)
    {
        cin>>n;
        s.push(n);
    }
    checkEmpty(s);
    checkFull(s);
    print(s);
    s.push(3);
    print(s);
    checkFull(s);
    s.pop();
    s.pop();
    cout<<s.Top()<<endl;
    s.push(9);
    s.push(8);
    s.push(10);
    int mx=findMax(s);
    cout<<mx<<endl;
    print(s);
    s.makeEmpty();
    checkEmpty(s);
    string s1;
    cin>>s1;
    bool b=isblanced(s1);

    if(b)
    {
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }

    frquency(s);



    cout<<endl;

    return 0;
}
