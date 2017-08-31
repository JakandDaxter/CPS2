//
//  Question 9.cpp
//  Lecture 1
//
//  Created by Aliana Tejeda on 8/29/17.
//  Copyright © 2017 Aliana Tejeda. All rights reserved.
//


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
