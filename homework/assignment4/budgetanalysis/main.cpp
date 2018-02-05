/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: budget calculation
 * Created on 2018/1/19, PM1:21
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    double budget,total,expense;
    int num,time;
    char indicator;
    
    cout <<"Please enter your budget for this month."<<endl;
    cin>>budget;
    
    time = 1;
    do
    {
        cout<<"Please enter your "<<time<<" expense for this month"<<endl;
        time++;
        cin>>expense;
        total += expense;
        cout<<"Enter y or Y if you decide to input another expense; otherwise "
                <<"please type N or n instead."<<endl;
        cin>>indicator;
    }while(indicator ==  'y' || indicator == 'Y');
    return 0;
}

