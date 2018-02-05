/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose:calculate property tax for senior citizen
 * Created on 2018/1/12, PM12:01
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    double houseValue,assessValue,annualPay,quarterPay,exemption,assessRate;
    float taxRate;
    
    exemption = 5000;
    assessRate = 0.6;
    
    cout <<"Please enter your house value and taxRate." <<endl;
    cout <<"house value:" <<endl;
    cin >> houseValue;
    cout <<"tax rate:" <<endl;
    cin >> taxRate;
    annualPay = (houseValue * assessRate - exemption)/100 * taxRate;
    quarterPay = annualPay /4;
    cout <<"The amount of payment for annual property tax is $" 
           <<setprecision(7) << annualPay << "." <<endl;
    cout <<"The amount of payment for quarter property tax is $" 
           <<setprecision(6) <<quarterPay <<"." <<endl;
    return 0;
}

