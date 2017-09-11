//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : EX 11.2-14-a&b.cpp
// course      : Computational Problem Solving II - CPET
// Date        : 9/11/2017
// Description : A class definition to represent types of food. A type of food is classi- fied as basic or prepared. Basic foods are further classified as Dairy, Meat, Fruit, Vegetable, or Grain. The services the class provides should be the capability to enter data for a new food, the capability to change data for a new food, and the capability to display existing data for a new food.
//b. Include the class definition created for Exercise 14a in a working C++ program that asks the user to enter data for four food items and then displays the entered data.
//=========================================================================================//
// ( )_( )
// (='.'=)('') <-- Bunny
// ( )_( )

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;


class food
{
    private:
        string type;
        string name;
    
    public:
        food();
    void add(string, string);
    void change(string , string);
    void showValues();
};

food::food()
{
    cout << "\n----------Food-------\n"<<endl;
}

void food::add(string t, string n)
{
    type = t;
    name = n;
}

void food::showValues()
{
    cout<< "The Food is:  " <<name << endl;
    cout << "The Food Type is: " << type << endl;
    
    
}

int main()
{
    
    
    string foodType;
    string foodName;
    
    cout << "Enter Name for food item 1:";
    cin  >>foodName;
    cout << "\nEnter Food type:";
    cin  >>foodType;
    
    
    
    food f1;
    f1.add(foodType , foodName);

    
    cout << "Enter Name for food item 2:";
    cin  >>foodName;
    cout << "\nEnter Food type:";
    cin  >>foodType;
    
    food f2;
    f2.add(foodType , foodName);
    
    cout << "Enter Name for food item 3:";
    cin  >>foodName;
    cout << "\nEnter Food type:";
    cin  >>foodType;
    food f3;
    f3.add(foodType , foodName);

    cout << "Enter Name for food item 4:";
    cin  >>foodName;
    cout << "\nEnter Food type:";
    cin  >>foodType;
    food f4;
    f4.add(foodType , foodName);

    
    f1.showValues();
    f2.showValues();
    f3.showValues();
    f4.showValues();

    
    return(0);
}











































