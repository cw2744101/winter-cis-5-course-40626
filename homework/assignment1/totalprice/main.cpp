/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: total price variable
 * Created on January 7, 2018, 8:13 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    float priceOne = 15.95, priceTwo = 24.95, priceThree = 6.95, 
            priceFour = 12.95, priceFive = 3.95, taxRate = 0.07; //$
    double subTotal, saleTax, total;
    
    subTotal = priceOne + priceTwo + priceThree + priceFour + priceFive;
    saleTax = subTotal * taxRate;
    total = subTotal + saleTax;
    
    cout << "the item price for those items are $" << priceOne << ", $" 
            << priceTwo << ", $" << priceThree << ", $" << priceFour 
            << ", $" << priceFive << "." << endl;
    cout << "the subtotal of the sale is $" << subTotal << endl;
    cout << "the sale tax is $" << saleTax << endl;
    cout << "the total amount of the sale is $" << total << endl;
    return 0;
}

