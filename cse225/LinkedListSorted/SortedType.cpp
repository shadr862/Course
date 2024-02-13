#include<iostream>
#include "SortedType.h"
using namespace std;
template<class T>
 sortedType<T>::sortedType()
 {
     length=0;
     CurrentPos=NULL;
 }

template<class T>
void  sortedType<T>::makeEmpty()
 {
     node<T>* location;
     while(head!=NULL)
     {
         location=head;
         head=head->next;
         delete location;
     }
     length=0;
 }

template<class T>
 bool sortedType<T>::isEmpty()
 {
     return length==0;
 }
template<class T>
 bool sortedType<T>::isFull()
 {
     try{
        node<T> *temp=new node<T>();
        delete temp;
        return false;
    }
    catch(std::bad_alloc exception){
        return true;
    }
 }

template<class T>
 int sortedType<T>::lengthIs()
 {
     return length;
 }
template<class T>
 void sortedType<T>::insertItem(T value)
 {
    node<T>* temp=new node<T>();
    temp->data=value;
    temp->next=NULL;
    try
    {
        if(isFull())
        {
            throw Full();
        }
        else if(isEmpty())
        {
            head=temp;
        }
        else if(head->data>value)
        {
            temp->next=head;
            head=temp;
        }
        else if(head->next==NULL&&head->data<=value)
        {
            head->next=temp;

        }
        else
        {
                node<T>* location;
                location=head;
                while((location->next)->data<value&&(location->next)->next!=NULL)
                {
                    location=location->next;
                }
                if((location->next)->next==NULL&&(location->next)->data<value)
                {
                    location=location->next;
                    location->next=temp;
                }
                else
                {
                    temp->next=location->next;
                    location->next=temp;
                }

        }
    }
    catch(Full ex)
    {
        cout<<"list is already full"<<endl;
    }

     length++;
 }

template<class T>
 void sortedType<T>::deleteItem(T value)
 {
     node<T>* location;
     location=head;
     try{
         if(isEmpty())
         {
             throw Empty();
         }
         else if(value==head->data)
         {
             head=head->next;
             delete location;
         }
         else
         {
                while((location->next)->data!=value)
                {
                    location=location->next;
                }
                node<T>* del=location->next;
                location->next=del->next;
                delete del;
         }
     }
     catch(Empty q)
    {
        cout<<"list is already empty"<<endl;
    }
    length--;
 }
template<class T>
 void sortedType<T>::resetList()
 {
    CurrentPos=head;
 }
template<class T>
 void sortedType<T>::getNextItem(T& value)
 {
     if(CurrentPos==NULL)
     {
         CurrentPos=head;
     }

     value=CurrentPos->data;
     CurrentPos=CurrentPos->next;

 }
template<class T>
 void sortedType<T>::retriveItem(T& value, bool& found)
 {
     node<T>* location;
     location=head;
     while(location!=NULL)
     {
         if(location->data<value)
         {
             location=location->next;
         }
         else if(location->data==value)
         {
             found=true;
             value=location->data;
             break;
         }
         else{
            found=false;
            break;
         }
     }


 }
template<class T>
void sortedType<T>::removeDuplicates()
{
     node<T>* location;
     location=head;
     while(location->next!=NULL)
     {
         if(head->data==head->next->data)
         {
             node<T>* del;
             del=head;
             head=head->next;
             length --;
             location=location->next;
             delete del;
         }
         else if(location->data==location->next->data && location->next->next!=NULL)
         {
             node<T>* del;
             del=location->next;
             location->next=del->next;
             delete del;
             length--;
         }
         else if(location->data==location->next->data && location->next->next==NULL)
         {
             node<T>* del=location->next;
             location->next=NULL;
             delete del;
             length--;
         }
         else{
         location=location->next;
         }

     }
}
