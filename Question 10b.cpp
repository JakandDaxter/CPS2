//
//  Question 10b.cpp
//  Lecture 3
//
//  Created by Aliana Tejeda on 9/11/17.
//  Copyright © 2017 Aliana Tejeda. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

int days( Date  * );

int main()
{
    Date d = {12, 21, 2012};
    
    int dayspassed;
    
    dayspassed = days(&d);
    
    cout<<" The number of days the turn of a century for a date that has passed the structue is given:  "<<dayspassed;cout<<endl;
    
    return(0);
}

int days(Date* temp)
{
    int totalDays = 0;
    
    Date initial = {1, 12, 2000};
    
    totalDays += (temp->year - initial.year)*360;
    
    totalDays += temp->day - initial.day;
    
    totalDays += (temp->month - initial.month)*30;
    
    return (totalDays);
}
