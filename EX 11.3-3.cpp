//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : EX 11.3-3.cpp
// course      : Computational Problem Solving II - CPET
// Date        : 9/11/2017
// Description : A subtraction operator function for the Complex class in Program 11.8 that subtracts two complex numbers.
//=========================================================================================//
// ( )_( )
// (='.'=)('') <-- Bunny
// ( )_( )

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


// declaration section
    class Complex
    {
        private:
            double realPart;
            double imaginaryPart;

        public:
            Complex(double real = 0.0, double imag = 0.0)
                {realPart = real; imaginaryPart = imag;}
            void showComplexValues();
            void assignNewValues(double real, double imag);
            Complex operator-(const Complex&);//prototype for the subtraction
            Complex operator+(const Complex&); // prototype for the addition operator
};
// implementation section

void Complex::showComplexValues() // accessor
    {
        char sign = '+';
            if (imaginaryPart < 0) sign = '-';
                cout << realPart << ' ' << sign << ' ' << abs(imaginaryPart) << 'i';
    }

Complex Complex::operator+(const Complex& complex2)
    {
            Complex temp;
            
            temp.realPart = realPart + complex2.realPart;
            temp.imaginaryPart = imaginaryPart + complex2.imaginaryPart;
            
    
            return temp;
    
    }

Complex Complex::operator-(const Complex& complex2)
{
    Complex temp;
    
    temp.realPart = realPart - complex2.realPart;
    temp.imaginaryPart = imaginaryPart - complex2.imaginaryPart;
    
    
    return temp;
    
}

int main()
    {
        Complex a(2.3, 10.5), b(6.3, 19.2), c , d; // declare three objects
        
        cout << "Complex number a is "; a.showComplexValues();
        cout << "\nComplex number b is "; b.showComplexValues();
        
        c = a + b; // add two complex numbers
        cout << "\n\nThe sum of a and b: "; c.showComplexValues();
        d = a - b; // subtract two complex numbers
    
        cout << "\n\nThe difference of a and b: "; d.showComplexValues();
        
        cout<<endl<<endl;;
    
        return 0;

    }























