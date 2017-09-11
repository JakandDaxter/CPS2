//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : EX 11.2-5.cpp
// course      : Computational Problem Solving II - CPET
// Date        : 9/11/2017
// Description : A class named Rectangle that has two double-precision data mem- bers named length and width. The class should have the following class functions:
//i. A constructor with the default values of 1 for both the length and width data members
//ii. An accessor function named showData()that displays a rectangle’s length and width
//iii. A mutator function named setData() to set a rectangle’s length and width
//iv. A class function named perimeter() that calculates and displays a rectangle’s perimeter
//v. A class function named area() that calculates and displaysa rectangle’sarea
//=========================================================================================//
// ( )_( )
// (='.'=)('') <-- Bunny
// ( )_( )

#include <iostream>
#include <iomanip>

using namespace std;

//Class

class Rectangle
{
    private:
        double length;
        double width;
        double P;
        double A;
    
    
    public:
        Rectangle(double = 1.0 , double = 1.0);
        void perimeter();
        void area();
        void setData(double , double);
        void ShowData();
};
//Implementation

Rectangle::Rectangle (double L , double W)
{
    P = 0.0;
    A = 0.0;
    length = L;
    width = W;
}

void Rectangle::perimeter ()
{
    P = ((2*length) + (2*width));
}

void Rectangle::area()
{
    A = length * width;
}

void Rectangle::setData(double L ,double W)
{
    width = W;
    length = L;
}

void Rectangle::ShowData()
{
    cout << fixed << setprecision(2) << endl;
    cout << "Length = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Perimeter = " << P << endl;
    cout << "Area   = " << A << endl;
}


int main()
{
    //  Initialize the variables
    double length = 0.0, width = 0.0;
    //    input the data
    cout << "length? : " ; cin >>length;cout<< endl;
    cout << "Width? : " ; cin >>width; cout<<endl;
    
    //    show the inputed data
    Rectangle r(length, width);
    r.perimeter();
    r.area();
    r.ShowData();
    
    cout<<endl;
    
    return(0);

}
