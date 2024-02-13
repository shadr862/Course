#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
const int max_items = 50;
class FullQueue {
};
class EmptyQueue {
};
template<class T>
class QueType
{
public:
QueType();
void MakeEmpty();
bool isEmpty();
bool isFull();
void Enqueue(T);
void Dequeue();
int csize();
T Front();
private:
int front;
int rear;
int size;
T info[max_items];
};
#endif // QUETYPE_H_INCLUDED
