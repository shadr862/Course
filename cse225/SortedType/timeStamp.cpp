#include"timeStamp.h"
#include<iostream>
using namespace std;

timeStamp::timeStamp()
{
    seconds=0;
    hours=0;
    minutes=0;
}
timeStamp::timeStamp(int s,int m,int h)
{
    seconds=s;
    hours=h;
    minutes=m;
}
bool operator==(timeStamp t1,timeStamp t2)
{
    if((t1.seconds==t2.seconds)&&(t1.minutes==t2.minutes)&&(t1.hours==t2.hours))
    {
        return true;
    }
    return false;
}

bool operator>(timeStamp t1,timeStamp t2)
{
    if(t1.hours>t2.hours)
    {
        return true;
    }
    else
    {
        if(t1.hours==t2.hours)
        {
            if(t1.minutes>t2.minutes)
            {
                return true;
            }
            else if(t1.minutes==t2.minutes)
            {
                if(t1.seconds>t2.seconds)
                 {
                  return true;
                 }

            }
        }


    }
    return false;

}
bool operator<(timeStamp t1,timeStamp t2)
{
    if(t1.hours<t2.hours)
    {
        return true;
    }
    else
    {
        if(t1.hours==t2.hours)
        {
            if(t1.minutes<t2.minutes)
            {
                return true;
            }
            else if(t1.minutes==t2.minutes)
            {
                if(t1.seconds<t2.seconds)
                 {
                  return true;
                 }

            }
        }


    }
   return false;

}


void timeStamp::printf()
{
    cout<<seconds<<" "<<minutes<<" "<<hours<<endl;
}
