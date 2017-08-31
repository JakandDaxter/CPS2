//  Lecture 1
//
//  Created by Aliana Tejeda on 8/28/17.
//  Copyright © 2017 Aliana Tejeda. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Naming of the Class

class Time
    {
    private:
        float secs;
        float mins;
        float hours;
    
    public:
        Time(float = 0.0 , float = 0.0 , float = 0.0);
        void ShowTimeData();
    };

//Implementation of Class
Time::Time(float S , float M , float H)
{
    
    secs = S;
    mins = M;
    hours = H;
    
}

void Time::ShowTimeData()

{
//  cout << fixed << setprecision(0) << endl;
cout << "The Time Is " << hours << ":" << mins << ":" << secs << endl;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Time d1(6.0 , 10.0,5.0);
    d1.ShowTimeData();
    
    return 0;
}
