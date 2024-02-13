#ifndef SORTEDTYPE_H_INCLUDED;
#define SORTEDTYPE_H_INCLUDED;
const int Max_size=10;
template<class T>
class SortedType
{
private:
    T info[Max_size];
    int length;
    int CurrentPos;
public:
    SortedType();
    void makeEmpty();
    bool isEmpty();
    bool isFull();
    int lengthIs();
    void insertItem(T);
    void deleteItem(T);
    void resetList();
    void getNextItem(T&);
    void retriveItem(T&, bool&);

};
#endif // SORTEDTYPE
