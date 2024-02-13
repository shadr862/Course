#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
const int max_size=5;
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
    void makeEmpty();
    bool isFull();
    bool isEmpty();
    void pop();
    T Top();


};
#endif // STACKTYPE_H_INCLUDED
