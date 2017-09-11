//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : EX 11.1-8.cpp
// course      : Computational Problem Solving II - CPET
// Date        : 9/11/2017
// Description : A class named Rectangle that has double-precision data members named length and width. The class should have member functions named perimeter() and area() to calculate a rectangle’s perimeter and area, a member function named setData() to set a rectangle’s length and width, and a member function named showData() that displays a rectangle’s length, width, perimeter, and area.
//=========================================================================================//
// ( )_( )
// (='.'=)('') <-- Bunny
// ( )_( )

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Class
class Rectangle
    {
        private:
            double length;
            double width;
            double A;
            double P;
        
    
        public:
            Rectangle(double = 0.0 , double = 0.0);
            void perimeter();
            void area();
            void setData(double, double);
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

void Rectangle::setData(double L , double W)
{
    length = L;
    width = W;
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
        Rectangle  r1(30.0, 25.0), r2;
        
        cout << "Rectangle #1" << endl;
        r1.perimeter(); //these lines are used to calculte the values
        r1.area();
        r1.ShowData();
        cout << "\n" << endl;
        cout << "-----------------------------------------\n";
         cout << "\n" << endl;
        cout << "Rectangle #2" << endl;
        r2.setData(500.3, 675.6);
        r2.perimeter();
        r2.area();
        r2.ShowData();
        cout << "\n" << endl;
        
        return(0);
    }
