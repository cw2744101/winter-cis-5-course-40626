/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chenl
 *
 * Created on 2018年1月28日, 上午10:47
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    double payment;
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd<=20){
        payment = hrsWrkd * payRate;
    }
    else if (hrsWrkd>20&&hrsWrkd<=40){
        payment = (hrsWrkd-20) * payRate * 1.5 + 20*payRate;}
    else{
        payment = (hrsWrkd-40)*payRate *2 + 20*payRate*1.5+20*payRate;}
    
    //Output the check
    cout<<"$"<<fixed<<setprecision(2)<<payment<<endl;
    
    //Exit
    return 0;
}

