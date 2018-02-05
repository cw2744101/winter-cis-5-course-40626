/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: calculate restaurant bill
 * Created on January 7, 2018, 8:52 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    float mealCost,
            taxRate,
            tipRate,
            taxAmount,
            tipAmount,
            totalBill;
    
    mealCost = 88.67; //$
    taxRate = 0.0675;
    tipRate = 0.2;
    
    taxAmount = mealCost * taxRate;
    tipAmount = tipRate * (taxAmount + mealCost);
    totalBill = tipAmount + taxAmount + mealCost;
    
    cout << "the amount of money spent on meal is $" << mealCost << endl
            << "the amount of money for tax is $" << taxAmount << endl
            << "the amount of money for tip is $" << tipAmount << endl
            << "the amount of money paid for bill is $" << totalBill << endl;
    
    return 0;
}

