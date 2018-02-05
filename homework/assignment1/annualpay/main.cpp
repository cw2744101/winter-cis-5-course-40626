/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: annual pay variable
 * Created on January 7, 2018, 8:41 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    float payAmount = 2200.0, //$
            payPeriod = 26,
            annualPay;
    
    annualPay = payAmount * payPeriod;
    
    cout << "the employee's annual payment is $" << annualPay <<"." << endl;
    return 0;
}

