//
//  Question 8.cpp
//  Lecture 1
//
//  Created by Aliana Tejeda on 8/28/17.
//  Copyright © 2017 Aliana Tejeda. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Class
class Rectangle
    {
        private:
            float length;
            float width;
            float A;
            float P;
        
    
        public:
            Rectangle(float = 0.0 , float = 0.0);
            void perimeter();
            void area();
            void setData(float, float);
            void ShowData();
    };
//Implementation
Rectangle::Rectangle (float L , float W)
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

void Rectangle::setData(float L , float W)
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
        r1.perimeter();
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
