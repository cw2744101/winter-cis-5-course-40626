/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: bankcheck
 * Created on 2018年1月17日, 下午11:49
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    const float rateA = 0.10,
            rateB = 0.08,
            rateC = 0.06,
            rateD = 0.04;
    unsigned int checkNmbr;
    double balanceI,payment;
    
    cout <<"Please enter your initial bank balance for this account:"
            <<endl;
    cin >> balanceI;
    cout <<"Please enter the number of check you have written for this month:"
            <<endl;
    cin >> checkNmbr;
    
    if (checkNmbr >0 && checkNmbr <20)
    {
        if (balanceI <400)
        {
            payment = 15 + rateA * checkNmbr;
            cout <<"The amount of money you need to pay is $" <<fixed
                    <<setprecision(2)<<payment<<endl;
        }
        else
        {
            payment = rateA * checkNmbr;
            cout <<"The amount of money you need to pay is $" <<fixed
                    <<setprecision(2)<<payment<<endl;
        }
    }
    else if (checkNmbr >=20 && checkNmbr <40)
    {
        if (balanceI <400)
        {
            payment = 15 + rateB * checkNmbr;
            cout <<"The amount of money you need to pay is $" <<fixed
                    <<setprecision(2)<<payment<<endl;
        }
        else
        {
            payment = rateB * checkNmbr;
            cout <<"The amount of money you need to pay is $" <<fixed
                    <<setprecision(2)<<payment<<endl;
        }
    }
    else if (checkNmbr >= 40 && checkNmbr <60)
    {
        if (balanceI <400)
        {
            payment = 15 + rateA * checkNmbr;
            cout <<"The amount of money you need to pay is $" <<fixed
                    <<setprecision(2)<<payment<<endl;
        }
        else
        {
            payment = rateA * checkNmbr;
            cout <<"The amount of money you need to pay is $" <<fixed
                    <<setprecision(2)<<payment<<endl;
        }
    }
    else if (checkNmbr >= 60)
    {
        if (balanceI <400)
        {
            payment = 15 + rateA * checkNmbr;
            cout <<"The amount of money you need to pay is $" <<fixed
                    <<setprecision(2)<<payment<<endl;
        }
        else
        {
            payment = rateA * checkNmbr;
            cout <<"The amount of money you need to pay is $" <<fixed
                    <<setprecision(2)<<payment<<endl;
        }
    }
    else
        cout <<"Please re-enter your check number and balance." <<endl;
    
    return 0;
}

