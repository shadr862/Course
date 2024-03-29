#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int max1 = 50;
template<class T>
class UnsortedType
{

private:
    T info[max1];
    int length;
    int currentPos;
public:
    UnsortedType();
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    void insertItem(T);
    void deleteItem(T);
    void retriveItem(T&,bool&);
    int lengthIs();
    void resetList();
    void getNextItem(T&);
};
#endif // UNSORTEDTYPE_H_INCLUDED
