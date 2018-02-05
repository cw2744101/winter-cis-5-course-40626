/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: payroll statistic
 * Created on 2018/1/20, PM1:46
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int num;
    double grossPay,grossTotal,stateTax,stateTotal,federalTax,federalTotal,
            fica,ficaTotal,netPay;
    
    cout<<"Please enter how many employees are in your company."<<endl;
    cin>>num;
    int t =0;
    
    do
    {
        t++;
        num--;
        cout<<"Please enter gross pay for your "<<t<<" employee."<<endl;
        cin>>grossPay;
        if(grossPay <0)
            cout<<"value denied."<<endl;
        grossTotal += grossPay;
        cout<<"Please enter state tax for your "<<t<<" employee."<<endl;
        cin>>stateTax;
        if(stateTax <0)
            cout<<"value denied."<<endl;
        stateTotal += stateTax;
        cout<<"Please enter federal tax for your "<<t<<" employee."<<endl;
        cin>>federalTax;
        if(federalTax <0)
            cout<<"value denied."<<endl;
        federalTotal += federalTax;
        cout<<"Please enter FICA withholding for your"<<t<<" employee."<<endl;
        cin>>fica;
        if(fica <0)
            cout<<"value denied."<<endl;
        ficaTotal += fica;
        if(fica + stateTax + federalTax > grossPay)
        {
            cout<<"You are supposed to enter the correct value for grossPay."
                    <<"Please restart the program and input the correct value."
                    <<endl;
            break;
        }
        
    }while(num <0);
    netPay = grossTotal + federalTotal + stateTotal + ficaTotal;
    cout<<"The gross pay for all your employees is $"<<grossTotal<<endl
            <<"The state tax for all your employees is $"<<stateTax<<endl
            <<"The federal tax for all your employees is $"<<federalTax<<endl
            <<"The FICA withholding for all your employees is $"<<ficaTotal
            <<endl
            <<"The net pay for all your employees is $"<<netPay<<endl;
    return 0;
}

