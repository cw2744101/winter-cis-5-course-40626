/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 11th, 2018, 1:15 PM
 * Purpose:  Menu
 */

//System Libraries Here
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number function
#include <ctime>     //Time Library for random seed
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Loop on Menu and problems
    do{
    
        //Menu with input of choice
        cout<<"Choose from the following Menu"<<endl;
        cout<<"Problem 1 -> Gaddis_9thEd_Chap5_Prob11_Population"<<endl;
        cout<<"Problem 2 -> Gaddis_9thEd_Chap5_Prob13_The Greatest and Least of"
                <<" Those"<<endl;
        cout<<"Problem 3 -> Gaddis_9thEd_Chap5_Prob14_Student Line Up"<<endl;
        cout<<"Problem 4 -> Gaddis_9thEd_Chap5_Prob15_Payroll Check"<<endl;
        cout<<"Problem 5 -> Gaddis_9thEd_Chap5_Prob26_Saving Account Balance "
                <<"Enhancement"<<endl;
        cout<<"Problem 6 -> Gaddis_9thEd_Chap5_Prob17_Sale Bar Chart"<<endl;
        cout<<"Problem 7 -> Gaddis_9thEd_Chap5_Prob19_Budget Analysis"<<endl;
        cout<<"Problem 8 -> Gaddis_9thEd_Chap5_Prob21_Random Number Guessing "
                <<"Enhancement"<<endl;
        cout<<"Problem 9 -> Gaddis_9thEd_Chap5_Prob22_Square Displays"<<endl;
        cout<<"Problem 10 -> Gaddis_9thEd_Chap5_Prob23_Pattern Displays"<<endl;
        cout<<"Type 1 to 10 only"<<endl<<endl;
        cin>>probNum;
    
        //Output the results
        switch(probNum){
            case 1: {
                double rate,
            population,
            dailyIncrease,
            start,
            total;
    int day;
    
    cout<<"Please enter the starting number of organisms, their average daily "
            <<"population increase (as a percentage), and the number of days "
            <<"they will multiply."<<endl;
    cin>>start>>rate>>day;
    total = start;
    if(rate <0 || population < 2 || day <1)
    {
        cout<<"Please re-enter your value so that the program could run."<<endl;
    }
    else
    {
        for(int x =1; x <= day; x++)
        {
            dailyIncrease = total * rate;
            population += dailyIncrease;
            total = start + population;
            cout<<"The size of the population for day #"<<x<<" is "<<total
                    <<endl;
        }
    }
            }

            case 2: {
                    int num;
    int integer,
            largest,
            least;
    
    cout<<"Please enter a series of integer to this program."<<endl
            <<"If you decide not to input any number any more, enter -99."
            <<endl;
    num = 0;
    do
    {
        num++;
        cout<<"Please enter your "<<num<< " integer below;"<<endl;
        cin>>integer;
        if(num ==1)
        {
            largest = integer;
            least = integer;
        }
        else
        {
            if(largest >integer&&integer !=-99)
                largest = integer;
            else if(least <integer&&integer !=-99)
                least = integer;
        }
    }while(integer != -99);
    cout<<"The largest number is "<<largest<<endl;
    cout<<"The least number is "<<least<<endl;
            }
            case 3: {
                    int num;
    string studentName,
            first,
            last;
    
    cout<<"Please enter how many students are in your class.The number must be"
            <<"between 1 to 25."<<endl;
    cin>>num;
    while(num<1 ||num>25)
        cout<<"Please enter the valid number for student."<<endl;
    for(int x = 1; x <= num; x++)
    {
        cout<<"Please enter the name of student #"<<x<<":"<<endl;
        cin>>studentName;
        if(x == 1)
        {
            first = studentName;
            last = studentName;
        }
        else
        {
            if(first < studentName)
                first = studentName;
            else if(last > studentName)
                last = studentName;
        }
    }
    
    cout<<"The name of first student is "<<first<<endl;
    cout<<"The name of last student is "<<last<<endl;
            }
            case 4: {
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
            }
            case 5: {
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
            }
            case 6: {
                    double sale1,sale2,sale3,sale4,sale5;
    
    cout <<"Please enter today's sales for store 1:"<<endl;
    cin>>sale1;
    cout<<"Please enter today's sales for store 2"<<endl;
    cin>>sale2;
    cout<<"Please enter today's sales for store 3"<<endl;
    cin>>sale3;
    cout<<"Please enter today's sales for store 4"<<endl;
    cin>>sale4;
    cout << "Please enter today's sales for store 5"<<endl;
    cin>>sale5;
    
    cout<<"SALES BAR CHART"<<endl
            <<"(each * = $100)"<<endl;
    
        cout<<"STORE 1: ";
        for(int x = 0; x <= sale1 / 10; x++)
        {
            cout<<"*";
        }
        cout<<endl;
        cout<<"STORE 2:";
        for(int y = 0; y <= sale2 / 10; y++)
        {
            cout<<"*";
        }
        cout<<endl;
        cout<<"STORE 3:";
        for(int z = 0; z <= sale3 / 10; z++)
        {
            cout<<"*";
        }
        cout<<endl;
        cout<<"STORE 4:";
        for(int a = 0; a <= sale4 / 10; a++)
        {
            cout<<"*";
        }
        cout<<endl;
        cout<<"STORE 5:";
        for(int b = 0; b <= sale5 / 10; b++)
        {
            cout<<"*";
        }
        cout<<endl;
            }
            case 7: {
                    double budget,total,expense;
    int num,time;
    char indicator;
    
    cout <<"Please enter your budget for this month."<<endl;
    cin>>budget;
    
    time = 1;
    do
    {
        cout<<"Please enter your "<<time<<" expense for this month"<<endl;
        time++;
        cin>>expense;
        total += expense;
        cout<<"Enter y or Y if you decide to input another expense; otherwise "
                <<"please type N or n instead."<<endl;
        cin>>indicator;
    }while(indicator ==  'y' || indicator == 'Y');
            }
            case 8: {
                    unsigned seed = time(0);
    srand(seed);
    char ch,entry;
    int number, guess, time;
    
    cout<<"Press entry to generate the number."<<endl;
    cin.get(ch);
    
    number = rand()%9999;//adjust your value here 
    time = 0;
    do
    {
        cout<<"Please enter your guess."<<endl;
        cin >>guess;
        if(guess > number)
        {
            cout<<"Too high, try again."<<endl;
        }
        else(guess < number);
        {
            cout<<"Too low, try again."<<endl;
        }
        time++;
        cout <<"This is your "<<time<<" tries."<<endl;
        
    } while (guess != number);
    cout<<"Congratulation! You get the number finally."<<endl
            <<"The number is "<<number<<endl;
            }
            case 9: {
                    string pattern;
    int number;
    
    pattern = 'X';
    
    cout <<"Please enter a value that is no larger than 15:"
            <<"It will be the length of a square."<<endl;
    cin>>number;
    
    if (number >0 && number <= 15)
    {
        for(int x = 1; x <= number; x++)
        {
            for(int y = 1; y <= number; y++)
                cout<<pattern;
            cout<<endl;
        }
    }
    else
        cout<<"please check the number your entered!"<<endl;
    
    cout<<"system pause"<<endl;
            }
            case 10: {
                string pattern;
    const int MIN_NUMBER = 1,
            MAX_NUMBER = 10;
    int num;
    
    pattern = '+';
    
    for (num = MIN_NUMBER;num <= MAX_NUMBER; num++)
    {
        for (int a = 0; a < num; a++)
        {
            cout<<pattern;
        }
        cout<<endl;
    }
    cout<<endl;
    
    for (num = MAX_NUMBER;num >= MIN_NUMBER; num--)
    {
        for (int b = 0; b < num; b++)
        {
            cout<<pattern;
        }
        cout<<endl;
    }
        }
            default:cout<<"You choose to exit"<<endl;
        }
    }while(probNum>=1&&probNum<=10);
   
    //Exit
    return 0;
}