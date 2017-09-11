//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : EX 11.2-14-c.cpp
// course      : Computational Problem Solving II - CPET
// Date        : 9/11/2017
// Description : Modify the program written for Exercise 14b to include a menu that offers the user the following
//    choices:
//1. Add a food item
//2. Modify a food item
//3. Delete a food item
//4. Exit this menu
//In response to the user’s choice, the program should initiate an action to implement the choice.
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

void food::change(string t, string n)
{
    type = t;
    name = n;
}

void food::showValues()
{
    cout<< "The Food is:  " <<name << endl;
    cout << "The Food Type is: " << type << endl;
    cout<< endl;
    
}

int main()
{
    food f1;
    int choice;
    string foodType;
    string foodName;
    
    //meanu
    
    
    cout<<"\n1.Add Food:";
    cout<<"\n2.Modify Food:";
    cout<<"\n3.Delete Food:";
    cout<<"\n4.Exit Menue:";cout<<endl;
    cout<<"Enter Numbered Choice:";cin>>choice;
    
    
    while( choice >0 && choice <=4)
    {
        switch(choice)
        {
            case 1:
                cout<< "\nEnter data for food\n";cout<<endl;
                cout<< "Enter food:";
                cin>>foodName;
                cout<< "\nEnter Food type:";
                cin>>foodType;
                f1.add(foodType,foodName);
                f1.showValues();
                break;
                
            case 2:
                cout<< "\nUpdate Food data"<<endl;
                cout<< "\nEnter Food Type:";
                cin>>foodType;cout<<endl;
                cout<<"Enter Food:";
                cin>>foodName;
                cout<<"\nFood as been updated\n"<<endl;
                f1.change(foodType, foodName);
                f1.showValues();
                break;
                
            case 3:
                f1.change("","");
                cout<<"\nFood Data Has Been Deleted\n"<<endl;
                f1.showValues();
                break;
                
            case 4:
                cout<<"\nPeace Out";
                cout<<endl;
                return(0);
                break;
        }
        cout<<"\nEnter Numbered Choice:";
        cin>>choice;
    }
    
    
    return(0);
}
