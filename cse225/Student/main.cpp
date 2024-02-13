#include <iostream>
#include"UnsortedType.cpp"
#include"Student.h"
#include"SortedType.cpp"
using namespace std;
void print(UnsortedType<Student> s1)
{
    SortedType<Student> st;
    for(int i=0;i<s1.lengthIs();i++)
    {
        Student s;
        s1.getNextItem(s);
        st.insertItem(s);
    }
    for(int i=0;i<st.lengthIs();i++)
    {
        Student s;
        st.getNextItem(s);
        s.print();
    }

}
int main()
{
    UnsortedType<Student> s1;
    cout<<"Number of students in CSE225?"<<endl;
    int n,e;
    cin>>n;
    cout<<"Number of Exams?"<<endl;
    cin>>e;
    for(int i=0;i<n;i++)
    {
        cout<<"Student ID:";
        int id;
        cin>>id;
        cout<<"Student Name:";
        string name;
        cin>>name;
        cout<<"Student CGPA:";
        float cg;
        cin>>cg;
        cout<<"Number of Exams attended :";
        int exm;
        cin>>exm;
        UnsortedType<int> m;
        for(int i=1;i<=exm;i++)
        {
            cout<<"Exam"<<" "<<i<<":";
            int r;
            cin>>r;
            m.insertItem(r);

        }
        Student s(id,name,cg,m);
        s1.insertItem(s);

    }
    print(s1);





    return 0;
}
