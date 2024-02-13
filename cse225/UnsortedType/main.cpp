#include <iostream>
#include"UnsortedType.cpp"
#include"studentInfo.h"
using namespace std;

int main()
{
    UnsortedType<int> u;

    u.insertItem(5);
    u.insertItem(7);
    u.insertItem(6);
    u.insertItem(9);

    for(int i=0;i<u.lengthIs();i++)
    {
        int item;
        u.getNextItem(item);
        cout<<item<<" ";
    }
    u.resetList();
    cout<<endl;
    cout<<"length is="<<u.lengthIs()<<endl;
    u.insertItem(1);
    for(int i=0;i<u.lengthIs();i++)
    {
        int item;
        u.getNextItem(item);
        cout<<item<<" ";
    }
    u.resetList();
    cout<<endl;
    bool found=false;
    int item=4;
    u.retriveItem(item,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else{
         cout<<"Item is not found"<<endl;
    }
    found=false;
    item=5;
    u.retriveItem(item,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else{
         cout<<"Item is not found"<<endl;
    }
    found=false;
    item=9;
    u.retriveItem(item,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else{
         cout<<"Item is not found"<<endl;
    }
    found=false;
    item=10;
    u.retriveItem(item,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else{
         cout<<"Item is not found"<<endl;
    }
   if(u.isFull())
   {
       cout<<"List is full"<<endl;
   }
   else{
    cout<<"List is not full"<<endl;
   }
   u.deleteItem(5);

    if(u.isFull())
   {
       cout<<"List is full"<<endl;
   }
   else{
    cout<<"List is not full"<<endl;
   }

   u.deleteItem(1);

   for(int i=0;i<u.lengthIs();i++)
    {
        int item;
        u.getNextItem(item);
        cout<<item<<" ";
    }
    cout<<endl;

    u.deleteItem(6);
    u.resetList();
    for(int i=0;i<u.lengthIs();i++)
    {
        int item;
        u.getNextItem(item);
        cout<<item<<" ";
    }
    cout<<endl;
    u.resetList();

    student s1(15234," Jon", 2.6);
    student s2(13732," Tyrion", 3.9);
    student s3(13569," Sandor", 1.2);
    student s4(15467," Ramsey",  3.1);
    student s5(16285," Arya", 3.1);

   UnsortedType<student> u2;
   u2.insertItem(s1);
   u2.insertItem(s2);
   u2.insertItem(s3);
   u2.insertItem(s4);
   u2.insertItem(s5);

   u2.deleteItem(s4);
   student us=s3;
   bool found1=false;
   u2.retriveItem(us,found1);
   if(found1)
   {
       cout<<"Item is found"<<endl;
       us.printf();
   }
   else{
    cout<<"Item is not found"<<endl;
   }
   cout<<"---------------"<<endl;
   for(int i=0;i<u2.lengthIs();i++)
    {
        student s;
        u2.getNextItem(s);
        s.printf();
    }
    cout<<endl;

    return 0;
}
