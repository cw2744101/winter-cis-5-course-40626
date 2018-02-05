/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: currency exchange
 * Created on 2018年1月12日, 下午2:00
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {

    const double yenperDollar = 98.93,
            europerDollar = 0.74;
    long double dollar,yenAmount,euroAmount;
    string currency,yen,euro;
    
    cout << "Please enter the amount of dollars you have:" << endl;
    cin >> dollar;
    cout <<"Please enter the type of currency you want exchange:" << endl;
    cin >> currency;
    
    if( currency == yen){
        yenAmount = dollar * yenperDollar;
        cout << "The amount of Yens you will get is " <<fixed <<setprecision(2)
            <<showpoint <<yenAmount <<"." <<endl;}
    else{
        euroAmount = dollar * europerDollar;
        cout << "The amount of EUROs you will get is " <<fixed <<setprecision(2)
               <<showpoint <<euroAmount <<"." <<endl;};
    
    return 0;
}

