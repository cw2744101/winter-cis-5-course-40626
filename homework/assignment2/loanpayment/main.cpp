/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: calculate loan payment
 * Created on 2018/1/11, PM9:42
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    float loanAmount, monthRate,monthlyPay,totalAmount,interestAmount,
            annualRate;
    unsigned int monthNmbr;
    
    cout << "Enter the loan amount that is due:" << endl;
    cin >> loanAmount;
    cout << "Enter the number of payment:" << endl;
    cin >> monthNmbr;
    cout << "Enter the annual interest rate:" << endl;
    cin >> annualRate;
    monthRate = annualRate/12;
    monthlyPay = (monthRate * pow((1+monthRate), monthNmbr))
            /(pow((1+monthRate), monthNmbr)-1) * loanAmount;
    totalAmount = monthlyPay * monthNmbr;
    interestAmount = totalAmount - loanAmount;
    cout << "Loan Amount:" << setw(21) << "$" <<loanAmount 
            <<endl;
    cout << "Monthly Interest Rate:" << setw(14) <<monthRate << endl;
    cout << "Number of Payment:" << setw(16) <<monthNmbr << endl;
    cout << "Monthly Payment:" << setw(17) <<"$" <<monthlyPay << endl;
    cout << "Amount Paid Back:" << setw(16) << "$" <<totalAmount << endl;
    cout << "Interest Paid:" << setw(19) <<"$" <<interestAmount << endl;
    return 0;
}

