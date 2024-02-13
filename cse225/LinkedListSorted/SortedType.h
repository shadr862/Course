#ifndef SORTEDTYPE_H_INCLUDED;
#define SORTEDTYPE_H_INCLUDED;
class Full
{

};
class Empty
{

};

template<class T>
struct node
{
    T data;
    node<T>* next;
};
template<class T>
class sortedType
{
private:
    node<T>* head=NULL;
    int length;
    node<T>* CurrentPos;

public:
    sortedType();
    void makeEmpty();
    bool isEmpty();
    bool isFull();
    int lengthIs();
    void insertItem(T);
    void deleteItem(T);
    void resetList();
    void getNextItem(T&);
    void retriveItem(T&, bool&);
    void removeDuplicates();

};
#endif // SORTEDTYPE
