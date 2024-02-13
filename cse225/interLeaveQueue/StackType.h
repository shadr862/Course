#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
const int max_size=50;
class FullStack
{

};
class EmptyStack
{

};
template <class T>
class StackType
{
private:
    T info[max_size];
    int top;
public:
    StackType();
    void push(T);
    bool isFull();
    bool isEmpty();
    void pop();
    T Top();


};
#endif // STACKTYPE_H_INCLUDED

