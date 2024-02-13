#include <iostream>
#include"SortedType.cpp"
using namespace std;
int main()
{
    SortedType<int> s;
    int array[] = { 5, 12, 33, 4, 56, 12, 20 }, del[] = { 12, 56, 5 }, k = 3;
    int n=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<n;i++)
    {
        s.insertItem(array[i]);
    }
    int n1=sizeof(del)/sizeof(del[0]);
    for(int i=0;i<n1;i++)
    {
        s.deleteItem(del[i]);
    }
    int value;
    for(int i=0;i<k;i++)
    {
        s.getNextItem(value);
        cout<<value<<" ";
    }
    cout<<endl;
    s.resetList();



    return 0;
}
