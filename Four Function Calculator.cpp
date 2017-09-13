//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : Project 1.cpp
// course      : Computational Problem Solving II - CPET
// DateCreated : 9/11/2017
// Description : A four function Complex Calculator
//=========================================================================================//
// ( )_( )
// (='.'=)('') <-- Bunny
// ( )_( )

#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>


using namespace std;

int main(int argc, const char * argv[])

{
    int choice = 0;
    
    cout << "\nWelcome To The Four Function Complex Calcultor\n";
    
    cout << "\nThis Current Edition of the Calculator Only Supports Two Complex Values to Be Manipulated\n";
    
    cout << "\nHere is your menu\n";
    
    cout << endl;
    
    cout<<"\n1.Addition\n";
    
    cout<<"\n2.Subtraction\n";
    
    cout<<"\n3.Multiplication\n";
    
    cout<<"\n4.Swap Values\n";
    
    cout<<"\n5.Move Answer To Variable A\n";
    
    cout<<"\n6.Move Answer To Variable B\n";
    
    cout<<"\n7.Enter Value To Variable A\n";
    
    cout<<"\n8.Enter Value To Variable B\n";
    
    cout<<"\n9.Show Current Data for A & B\n";
    
    cout<<"\n10. Exit \n\n";
    
    cout<<"Enter Your Desired Numbered Choice Here:";cin>>choice;
    
    {if (choice == 10) //safety net to make sure the menue actually exit
    {return(0);}}//Safe Net to Exit
    
    while( choice >0 && choice <=10)
    {
        {
    cout << "\nHere is your menu\n";
    
    cout << endl;
    
    cout<<"\n1.Addition\n";
    
    cout<<"\n2.Subtraction\n";
    
    cout<<"\n3.Multiplication\n";
    
    cout<<"\n4.Swap Values\n";
    
    cout<<"\n5.Move Answer To Variable A\n";
    
    cout<<"\n6.Move Answer To Variable B\n";
    
    cout<<"\n7.Enter Value To Variable A\n";
    
    cout<<"\n8.Enter Value To Variable B\n";
    
    cout<<"\n9.Show Current Data for A & B\n";
    
    cout<<"\n10. Exit \n";
        
            cout<<"Enter Your Desired Numbered Choice Here:";cin>>choice;}//Menue Repeated
        
        switch(choice)//choices
        {
            case 1:
//              cout<<"\nThe Addition of the Variables A & B\n\n";
//              cout<< 
                break;
                
            case 2:
                break;
                
            case 3:
                break;
                
            case 4:
                break;
                
            case 5:
                break;
                
            case 6:
                break;
                
            case 7:
                break;
                
            case 8:
                break;
                
            case 9:
                break;
                
            case 10:
                cout<<"\n Peace Out \n\n";
                return(0);
                break;
                
        }

    
    
    
    }
    
}
