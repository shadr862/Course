#include<iostream>
#include"Student.h"
#include"vector"
#include"algorithm"
#include"UnsortedType.cpp"
using namespace std;
Student::Student()
{
    name='\0';
    id=0;
    cgpa=0;
}
Student::Student(int ID , string Name, float cg, UnsortedType<int> Marks)
{
    id=ID;
    name=Name;
    cgpa=cg;
    marks=Marks;
}
int Student::GetId()
{
    return id;
}

bool operator<(Student s1,Student s2)
{
    if(s1.GetId()<s2.GetId())
    {
        return true;
    }
    return false;
}
void Student::print()
{
    cout<<"ID:"<<id<<";"<<"Name:"<<name<<";"<<"cgpa:"<<cgpa<<";"<<"Exam:";
    vector<int> v;
    for(int i=0;i<marks.lengthIs();i++)
    {
        int n;
        marks.getNextItem(n);
        v.push_back(n);
        cout<<n<<",";
    }
    sort(v.begin(),v.end());
    double sum=0;
    double avg;
    if(v.size()>=5)
    {
        for(int i=v.size()-1;i>1;i--)
        {
          sum=sum+v[i];
        }
        avg=sum/(v.size()-2);

    }
    else if(v.size()==4)
    {
         for(int i=v.size()-1;i>0;i--)
         {
             sum=sum+v[i];
         }
         avg=sum/(v.size()-1);
    }
    else{
            for(int i=v.size()-1;i>=0;i--)
         {
             sum=sum+v[i];
         }
         avg=sum/v.size();

    }
    cout<<"Average:"<<avg<<endl;
}
