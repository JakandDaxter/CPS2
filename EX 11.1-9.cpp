//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : EX 11.1-9.cpp
// course      : Computational Problem Solving II - CPET
// Date        : 9/11/2017
// Description : A class definition for a class named IntDate. The declaration section should have a data member for a date represented as a single integer.For example, if a date is stored in the form YearMonthDay, a date such as 11/23/12 would be stored as 20121123. This way of storing data is more efficent because it is all stored in one place and not taking up unessesary storage units in the memory.
//=========================================================================================//
// ( )_( )
// (='.'=)('') <-- Bunny
// ( )_( )


#include <iostream>
#include <iomanip>

using namespace std;

//Class
class IntDate
{
private:
    int Year;
    int Month;
    int Day;
    
    
public:
    IntDate(int = 0 , int = 0 , int = 0);
    void setData(int, int , int);
    void ShowData();
};
//Implementation
IntDate::IntDate (int Y , int M, int D)
{
//    make sure to initalize here as well to make sur enothing is left over from the last run
    Year = 0;
    Month = 0;
    Day = 0;
    
    Year = Y;
    Month = M;
    Day = D;
}


void IntDate::setData(int Y , int M, int D)
{
    Year = Y;
    Month = M;
    Day = D;
}
void IntDate::ShowData()
{
    cout << "The Date Is :" << Year << ","<<Month<<","<<Day<<","<< endl;
}


int main()
{
//  Initialize the variables
    int years = 0,months = 0,days = 0;
//    input the data
    cout << "Todays Date Is?......" << endl;
    cout << "Year? : " ; cin >>years; cout<<endl;
    cout << "Month? : " ; cin >>months; cout<<endl;
    cout << "Day? : " ; cin >>days; cout<<endl;
//    show the inputed data
    IntDate H(years,months,days);
    H.ShowData();
    
    return(0);
}
