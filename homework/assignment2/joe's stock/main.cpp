/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: stock calculation
 * Created on 2018/1/11, PM8:28
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {

    unsigned int shareNmbr;
    float buyPrice, salePrice,commissionRate;
    double income, outcome, profit,cmsnIn,cmsnOut;
    
    shareNmbr = 1000;
    buyPrice = 45.50; //$
    salePrice = 56.90; //$
    commissionRate = 0.02;
    
    outcome = shareNmbr * buyPrice;
    cout << "The amount that Joe paid for the stock is $" << outcome << "." 
            <<endl;
    cmsnIn = outcome * commissionRate;
    cout << "The amount that Joe paid for commission when he brought in the "
            <<"stock is $" << cmsnIn << "." <<endl;
    income = shareNmbr * salePrice;
    cout << "The amount that Joe earned for the stock is $" << income << "."
            << endl;
    cmsnOut = income * commissionRate;
    cout <<"The amount that Joe paid for commission when he sold out the stock "
            <<"is $" << cmsnOut <<"." <<endl;
    profit = income - outcome - cmsnIn -cmsnOut;
    cout << "The profit of Joe's stock is $" << profit << "." <<endl;
    return 0;
}

