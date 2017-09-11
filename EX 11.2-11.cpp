//=========================================================================================//
// Programmer  : Aliana Tejeda
// File Name   : EX 11.2-11.cpp
// course      : Computational Problem Solving II - CPET
// Date        : 9/11/2017
// Description : A class named Student consisting of an integer student ID number and a double-precision grade point average.The constructor for this class should initialize the ID number to 111111 and the grade point average to 0.0. Include an accessor function to display all data values.
//=========================================================================================//
// ( )_( )
// (='.'=)('') <-- Bunny
// ( )_( )

#include <iostream>
#include <iomanip>

using namespace std;

//class
class Student
{
    private:
        int Studentid;
        double GPA;

    public:
        Student( int  ID = 111111 , double G = 0.0)
        { Studentid = ID; GPA = G;}
    
        void ShowData();
    
        void SetData(int ID, double G)
        {Studentid = ID ; GPA = G;}

};

//Implementation

void Student::ShowData()
{	cout <<"The Student’s ID is :"<< Studentid << endl;
    cout <<"The Student’s GPA is :"<<GPA<<endl;
}

int main()
{
    Student S1(123456, 2.5), S2;
    
    cout <<"Student 1"<<endl;
    S1.ShowData();
    
    cout<<endl;
    
    cout<< "Student 2"<<endl;
    S2.SetData(789345, 3.34);
    S2.ShowData();
    cout<<endl;
    return(0);		



}
