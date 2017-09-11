//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : EX 11.1-6.cpp
// course      : Computational Problem Solving II - CPET
// Date        : 9/11/2017
// Description : A class declaration section for each of the following specifications. Include a prototype for a constructor and a member function named showData() that can be used to display data member values.A class named Time that has integer data members named secs, mins, and hours.An implementation section for the constructor and showData() mem- ber functions corresponding to the class declaration created for Exercise 4a.
//=========================================================================================//
// ( )_( )
// (='.'=)('') <-- Bunny
// ( )_( )

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Naming of the Class

class Time
    {
    private:
        int secs;
        int mins;
        int hours;
    
    public:
        Time(int = 0 , int = 0 , int = 0);
        void ShowTimeData();
    };

//Implementation of Class

Time::Time(int S , int M , int H)
{
    
    secs = S;
    mins = M;
    hours = H;
    
}

void Time::ShowTimeData()

{
//  cout << fixed << setprecision(0) << endl;
cout << "The Time Is " << hours << ":" << mins << ":" << secs << endl;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Time d1(6,10,5);
    d1.ShowTimeData();
    
    return 0;
}
