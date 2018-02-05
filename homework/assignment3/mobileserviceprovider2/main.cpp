/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: mobile service machine
 * Created on 2018/1/17, PM3:13
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    char choice;
    float minute;
    const float rateA = 0.45, //$
            rateB = 0.40;
    double const costA = 39.99,
            costB = 59.99,
            costC = 69.99;
    double paymentA,paymentB,paymentC;
    int limitA = 450,
            limitB = 900; //minutes
    char month;
    unsigned int jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec;
    jan = mar = may = jul = aug = oct = dec = 744;
    apr = jun = sep = nov = 720;
    feb = 672;
    
    cout << "Please enter the package type your Purchased." << endl;
    cout << "Please enter A, B or C." << endl;
    cin >> choice;
    switch (choice) {
        case 'A' :
            cout << "Please enter how many minutes were used." << endl;
            cin >> minute;
            cout << "Please enter the month that you purchased." << endl;
            cin >> month;
            if (month * 60 >= minute)
            {
                minute = minute > limitA ? minute : limitA;
                paymentA = rateA * (minute - limitA) + costA;
                cout << "The amount of payment for your mobile service is $" 
                        <<fixed <<setprecision(2) <<paymentA << "." <<endl;}
            else
            {
                cout <<"Please enter the accurate minutes for your mobile "
                        <<"service." <<endl;
            }
            break;
        case 'B':
            cout <<"Please enter how many minutes were used." << endl;
            cin >> minute;
            cout <<"Please enter the month that you purchased."<<endl;
            cin >> month;
            if (month * 60 >= minute)
            {
                minute = minute > limitB ? minute : limitB;
                paymentB = rateB * (minute - limitB) + costB;
                cout << "The amount of payment for your mobile service is $" 
                        <<fixed <<setprecision(2) <<paymentB << "." <<endl;}
            else
            {
                cout <<"Please enter the accurate minutes for your mobile "
                        <<"service." <<endl;
            }
            break;
        case 'C':
            cout << "The amount of payment for your mobile service is $"
                    <<paymentC << "," << endl;
            break;
        default:
            cout << "The valid choice are A, B and C, please run this program "
                    <<"again and enter the valid choice.";
    }
    return 0;
}

