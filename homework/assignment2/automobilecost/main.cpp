/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: inquiry information
 * Created on 2018/1/12, PM6:28
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    double loanPay,insurance,gasCost,tires,maintaince,monthTotal,annualTotal;
    
    cout << "Please enter the following information for your vehicle expense:" 
            << endl
            <<"loan payment" << endl;
    cin >> loanPay;
    cout <<"insurance" <<endl;
    cin >> insurance;
    cout << "gas oil" <<endl;
    cin >>gasCost;
    cout <<"tires" <<endl;
    cin >>tires;
    cout <<"maintaince" <<endl;
    cin >>maintaince;
    monthTotal = loanPay + insurance + gasCost + tires + maintaince;
    annualTotal = monthTotal * 12;
    cout <<"The total expense for your car per month is $" <<monthTotal <<"."
            <<endl;
    cout <<"The total expense for your car per year is $" <<annualTotal <<"."
            <<endl;
    return 0;
}

