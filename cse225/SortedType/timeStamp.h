#ifndef TIMESTAMP_H_INCLUDED;
#define TIMESTAMP_H_INCLUDED;

class timeStamp
{
    friend bool operator==(timeStamp,timeStamp);
    friend bool operator<(timeStamp,timeStamp);
    friend bool operator>(timeStamp,timeStamp);
private :
    int seconds;
    int minutes;
    int hours;
public:
    timeStamp();
    timeStamp(int,int,int);
    void printf();
};
#endif // TIMESTAMP_H_INCLUDED
