/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chenl
 *
 * Created on 2018年1月27日, 下午11:01
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;
    unsigned short hours;
    double paymentA,paymentB,paymentC,payment,cheap;
    float rate;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    const double baseA = 16.99; //$
    const double baseB = 26.99;
    const double baseC = 36.99;
    const float ratea1 = 0.95;
    const float ratea2 = 0.85;
    const float rateb1 = 0.74;
    const float rateb2 = 0.64;
    

            if(hours<=10)
                paymentA = baseA;
            else if(hours>20)
                paymentA = baseA + 0.85 *(hours-20)+10*0.95;
            else
                paymentA = baseA +0.95 *(hours-10);

            if(hours<=20)
                paymentB = baseB;
            else if(hours >30)
                paymentB = baseB +0.64*(hours-30)+10*0.74;
            else
                paymentB = baseB + 0.74*(hours-20);

            paymentC = baseC;
    switch(package){
        case 'A':
        case 'a':payment = paymentA;break;
        case 'B':
        case 'b':payment =paymentB;break;
        case 'C':
        case 'c':payment =paymentC;break;}
    
    //Output the Charge
    cout<<"$"<<fixed<<setprecision(2)<<payment;

    //Output the cheapest package and the savings
    if(paymentA<paymentB&&paymentA<paymentC){
        cheap =payment-paymentA;
        cout<<" A "<<fixed<<setprecision(2)<<"$"<<cheap<<endl;}
    else if(paymentB<paymentA&&paymentB<paymentC){
        cheap = payment-paymentB;
        cout<<" B "<<fixed<<setprecision(2)<<"$"<<cheap<<endl;}
    else if (paymentC<paymentA&&paymentC<paymentA){
        cheap = payment-paymentC;
        cout<<" C "<<fixed<<setprecision(2)<<"$"<<cheap<<endl;}
        
    //Exit
    return 0;
}

