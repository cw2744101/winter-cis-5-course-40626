/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: simple calculation
 * Created on January 7, 2018, 2:04 PM
 */

//calculating the stock commission
#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    int stockNumber, //number of stock Kathryn has.
            stockPrice; //price of stock per share
    float commissionRate; // the percentage of commission
    long totalPrice,
            totalCommission,
            totalAmount;
    
    stockNumber = 750;
    stockPrice = 35.00;
    commissionRate = 0.02;
    
    totalPrice = stockNumber * stockPrice;
    totalCommission = stockNumber * commissionRate * stockPrice;
    totalAmount = totalPrice + totalCommission;
   
    cout << "The amount paid for the stock alone is $" << totalPrice <<"."
            << endl
            << "The amount of commission is $" << totalCommission << "."
            << endl
            << "The total amount paid is $" << totalAmount << "." << endl;
    return 0;
}

