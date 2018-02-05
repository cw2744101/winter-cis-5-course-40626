/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: saving account balance check
 * Created on 2018/1/20, PM11:52
 */

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {

    double annualRate,startBalance,deposit,depositTotal,withdraw,withdrawTotal,
            monthInterest,monthTotal,monthBalance,interestTotal;
    int month;
    
    cout<<"Please enter your annual interest for saving account."<<endl;
    cin>>annualRate;
    cout<<"Please enter your starting balance in the saving account."<<endl;
    cin>>startBalance;
    cout<<"Please enter how many months have been passed since the account was"
            <<" opened."<<endl;
    cin>>month;
    
    interestTotal = 0;
    for(int x =0; x <month; x++)
    {
        cout<<"Please enter the amount of money you deposited for month "<<x
                <<endl;
        cin>>deposit;
        depositTotal += deposit;
        cout<<"Please enter the amount of money you withdrew for month "<<x
                <<endl;
        cin>>withdraw;
        withdrawTotal += withdraw;
        monthBalance = startBalance + depositTotal 
                - withdrawTotal + interestTotal;
        monthInterest = monthBalance * annualRate /12;
        interestTotal += monthInterest;
    }
    monthTotal = interestTotal + startBalance + depositTotal - withdrawTotal;
    
    cout<<"The ending balance is $"<<fixed<<setprecision(2)<<monthTotal<<endl
            <<"The total amount of deposits is $"<<fixed<<setprecision(2)
            <<depositTotal<<endl
            <<"The total amount of withdraws is $"<<fixed<<setprecision(2)
            <<withdrawTotal<<endl
            <<"The total amount of interests is $"<<fixed<<setprecision(2)
            <<interestTotal<<endl;
    
    ofstream outputFile;
    outputFile.open("financial report.txt");
    
    cout<<"Now writing data to the File."<<endl;
    outputFile <<"Ending balance is $"<<fixed
            <<setprecision(2)<<monthTotal<<endl;
    outputFile <<"Deposit is $"<<fixed<<setprecision(2)<<depositTotal<<endl;
    outputFile <<"Withdraw is $"<<fixed<<setprecision(2)<<withdrawTotal<<endl;
    outputFile <<"Interest is $"<<fixed<<setprecision(2)<<interestTotal<<endl;
    
    outputFile.close();
    cout<<"done."<<endl;
    return 0;
}

