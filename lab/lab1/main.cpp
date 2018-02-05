/* 
 * File:   main.cpp
 * Author: chenlin 
 * Purpose: gasoline company
 * Created on 2018/1/10, pm12:20
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    double gasPrice, fedTax,stateTax,saleTax,lowerProfit,higherProfit,totalTax,
            basePrice, percentPrice,profitRange;
    fedTax = 0.184; //cents per gallon
    stateTax = 0.417; // cents per gallon
    saleTax = 0.0225;
    lowerProfit = 0.07; // cents per gallon
    higherProfit = 6.5; //%
   
    cin >> gasPrice;
    basePrice = (gasPrice -lowerProfit - fedTax - stateTax)/(1+saleTax);
    cout << "The base price for a gallon of oil is $" << setprecision(3)
            << basePrice << "." << endl;
   totalTax = fedTax + stateTax + saleTax * basePrice; 
   cout << "The total tax on a gallon of gas is $" << totalTax << "." <<endl;
   percentPrice = (totalTax / gasPrice) * 100;
   cout << "The percentage price due to gas tax is " << percentPrice << "%."
           << endl;
   profitRange = (lowerProfit / basePrice)* 100;
   cout << "The oil company profit range is from " << profitRange << "% to "
           << higherProfit << "%." << endl;
    return 0;
}

