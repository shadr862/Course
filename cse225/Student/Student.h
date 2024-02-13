#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include"UnsortedType.h"
#include<iostream>
using namespace std;

class Student
{
friend bool operator<(Student,Student);

private:
    int id;
    string name;
    float cgpa;
    UnsortedType<int> marks ;
public:
    Student();
    Student(int , string, float, UnsortedType<int>);
    int GetId();
    void print();

};
#endif // UNSORTEDTYPE_H_INCLUDED
