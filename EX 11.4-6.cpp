//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : EX 11.4-6.cpp
// course      : Computational Problem Solving II - CPET
// Date        : 9/11/2017
// Description : Construct a Date class function named isWeekday() that returns a Boolean value of true if the date is a weekday; otherwise, it should return a false value. The function should call the dayOfWeek() function written for Exercise 5a, and then use the returned inte- ger value to determine whether the day is a weekday. A weekday is any day from 2 to 6, which corresponds to the days Monday through Friday.
//=========================================================================================//
// ( )_( )
// (='.'=)('') <-- Bunny
// ( )_( )

    #include <iostream>
    #include <iomanip>
    using namespace std;

// declaration section

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
            bool isLeapYear();
            bool isWeekday(int,int,int);
            bool operator==(const Date&);
            int dayofWeek(int, int, int);
            void nextDay(int,int,int);
};


int Date::dayofWeek(int m,int y, int d)
{
    
    
    month=m;
    year=y;
    day=d;
    
    if (m<3){
        m=month+12;
        y=y-1;
    }
    int century;
    century=int(y/100);
    y=y%100;
    int t= d+int(26*(m+1)/10)+y+int(y/4)+int(century/4)-2*century;
    d=t%7;
    if (d<0)
    {
        d=d+7;
    }
    
    return d;
}

bool Date::isWeekday(int d,int m,int y )
{
    int WY;
    bool day;
    
    WY=dayofWeek(d,m,y);
    if(WY>1){
        day=true;
    }
    else
        day=false;
    
    cout<<"True/False : "<<day<<endl;
    return day;
}

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

int main(){
    
    Date a,b,c;
    a.isWeekday(06,2051,11);
    b.isWeekday(03,2011,15);
    b.nextDay(2,03,2033);
    b.showDate();
    c.nextDay(30,12,2011);
    c.showDate();
    return 0;
    
}
