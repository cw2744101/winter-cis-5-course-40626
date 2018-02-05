/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: paycheck calculator
 * Created on 2018/1/18, AM10:46
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {


    double hrsWrkd,payRate,payCheck;
    
    
    cout<<"Please enter your hours for works and pay rate:"<<endl;
    cin>>hrsWrkd>>payRate;

    if (hrsWrkd <0 || payRate <0)
    {
        cout<<"Please re-enter your hours or pay rate."<<endl;
    }
    else if (hrsWrkd >40)
    {
        payCheck = payRate * 2 * (hrsWrkd-40) + payRate * 40;
        cout <<"The amount of payment is $" <<payCheck<<endl;
    }
    else
    {
        payCheck = payRate * hrsWrkd;
        cout<<"The amount of payment is $"<<payCheck<<endl;
    }
    
    return 0;
}

