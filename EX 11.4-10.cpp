//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : EX 11.4-10.cpp
// course      : Computational Problem Solving II - CPET
// Date        : 9/11/2017
// Description : Construct a Date class function named nextDay() that increments a date by one day. For this function, assume each month consists of 30 days, and a year consists of 360 days.
//=========================================================================================//
// ( )_( )
// (='.'=)('') <-- Bunny
// ( )_( )
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

class Date
{
    private:
        int month;
        int day;
        int year;
    
    public:
        Date(int m = 0, int d = 0, int y = 0000) // inline constructor
            {month = m; day = d; year = y;}
    
        void setDate(int m, int d, int y) // inline mutator
            {month = m; day = d; year = y;}
    
        void showDate(); // accessor
    
        void nextDay(int , int , int);
    
};

void Date::nextDay(int m, int d, int y)
{

    
        d++;
    
        if(d>30)
            {
                m=m+1;
                d=01;
            }
    
        if (m>12)
    
            {
                y=y+1;
                m=01;
            }
    
    month = m;
    day = d;
    year = y;
    
}

void Date::showDate()
{
    cout << "The next day is " << setfill('0')
    << setw(2) << month << '/'
    << setw(2) << day << '/'
    << setw(2) << year%100;
    cout << endl;
}

int main()
{
    Date a(5, 8 , 2008);
    
    a.nextDay(5, 8 , 2008);
    a.showDate();
    
    cout<<endl;
    
    return(0);
}

