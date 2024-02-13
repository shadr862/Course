#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
template<class T>
class dynArr1{
private:
   T** arr;
    int size;
public:
    dynArr1();
    dynArr1(int,int);
    ~dynArr1();
    void setValue(int,int,T);
    T getValue(int,int);
    void allocate(int,int);



};
#endif // DYNARR_H_INCLUDED
