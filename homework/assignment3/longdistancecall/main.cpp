/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: long distance call fee
 * Created on 2018/1/17, PM7:45
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    float timeStart,timeEnd,accurateTime;
    unsigned int minute,quotient;
    double cost;
    const float timeOne = 7.00,//7:00
            timeTwo = 19.00, //19:00
            timeThree = 24.00; //24:00
    const double rateOne = 0.05,
            rateTwo = 0.45,
            rateThree = 0.20;
    
    
    cout <<"Please enter the time you start your call in a form of HH.MM" <<endl
            <<"For example: 15.45 = 15:45" <<endl;
    cin >> timeStart;
    cout <<"Please enter how long does the call take in minutes" <<endl;
    cin >> minute;
    accurateTime = ((timeStart - static_cast<float>(timeStart))*100 + minute);
    quotient = (accurateTime/60 - static_cast<float>(accurateTime/60))*60/100;
    timeEnd = static_cast<float>(timeStart) + 
            (static_cast<float>(accurateTime/60)) + quotient;
    if (timeStart - static_cast<float>(timeStart) <= 0.60)
    {
        if (timeStart >= 0 && timeEnd < 7.00)
        { 
            cost = minute * rateOne;
            cout<<"The money you need to pay for call is $" <<cost <<endl;
        }
        else if (timeStart >= 7.00 && timeEnd <= 19.00)
        {
            cost = minute * rateTwo;
            cout<<"The money you need to pay for call is $" <<cost <<endl;
        }
        else if (timeStart > 19.00 && timeEnd < 24.00)
        {
            cost = minute * rateThree;
            cout<<"The money you need to pay for call is $" <<cost <<endl;
        }
        else 
        {
            cout <<"Please help the machine to divide your time into two or "
                    <<"three time zone:0-6:59,7:00-19:00,19:01-23:59, "
                    <<"so that the machine can identify the time."<<endl;
        }
    }
    return 0;
}

