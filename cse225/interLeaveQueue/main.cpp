#include <iostream>
#include <iostream>
#include<string>
#include"quetype.cpp"
#include"StackType.cpp"
#include "UnsortedType.cpp"
using namespace std;

UnsortedType<int> list1;
void interLeaveQueue(QueType<int> q)
{

    if (q.csize() % 2 != 0)
        cout << "Input even number of integers." << endl;


    StackType<int> s;
    int halfSize = q.csize() / 2;


    for (int i = 0; i < halfSize; i++) {
        s.push(q.Front());
        q.Dequeue();
    }


    while (!s.isEmpty()) {
        q.Enqueue(s.Top());
        s.pop();
    }


    for (int i = 0; i < halfSize; i++) {
        q.Enqueue(q.Front());
        q.Dequeue();
    }


    for (int i = 0; i < halfSize; i++) {
        s.push(q.Front());
        q.Dequeue();
    }

    while (!s.isEmpty()) {
        q.Enqueue(s.Top());
        s.pop();
        q.Enqueue(q.Front());
        q.Dequeue();
    }
    while(!q.isEmpty())
    {
        list1.insertItem(q.Front());
        q.Dequeue();
    }
}
int main()
{
    QueType<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int n1;
        cin>>n1;
        q.Enqueue(n1);
    }
    interLeaveQueue(q);
    for (int i = 0; i < n ;i++) {
        int p;
        list1.getNextItem(p);
        cout<<p<<" ";
    }


}
