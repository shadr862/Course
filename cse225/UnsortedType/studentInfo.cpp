#include<iostream>
#include"studentInfo.h"
using namespace std;
student::student()
{
    name='\0';
    id=0;
    cg=0;
}
bool operator==(student s1,student s2)
{
    if(s1.id==s2.id&&s1.name==s2.name&&s1.cg==s2.cg)
    {
        return true;
    }
    return false;
}
student::student(int Id,string Name,double Cg)
{
    name=Name;
    id=Id;
    cg=Cg;
}
void student::printf()
{
    cout<<id<<","<<name<<","<<cg<<endl;
}

