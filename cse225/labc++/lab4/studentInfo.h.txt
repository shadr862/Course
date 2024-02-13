#ifndef STUDENTINOF_H_INCLUDED
#define STUDENTINOF_H_INCLUDED
#include<iostream>
using namespace std;
class student
{
    friend bool operator==(student,student);
private :
    string name;
    int id;
    double cg;
public:
    student();
    student(int,string,double);
    void printf();
};
#endif // STUDENTOF_H_INCLUDED
