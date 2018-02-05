/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: stock profit
 * Created on 2018年2月4日, 上午9:12
 */

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
void warning();
double profit(int, double, double, double, double);
int main(int argc, char** argv) {

    cout<<"STOCK MARKET"<<endl;
    cout<<"Please answer the following question."<<endl;
    //input shares
    int share;
    cout<<"How many shares do you want to sale?"<<endl;
    cin>>share;
    while(share<0){
        cout<<"The number must be greater than 0."<<endl;
        cout<<"How many shares do you want to sale?"<<endl;
        cin>>share;
    }
    //input sale price
    double salePrice;
    cout<<"What is the sale price of your stock?"<<endl;
    cin>>salePrice;
    while(salePrice<0)
    {
        warning();
        cout<<"What is the sale price of your stock?"<<endl;
        cin>>salePrice;
    }
    //input sale commission payment
    double saleCom;
    cout<<"How much do you pay for sale commission?"<<endl;
    cin>>saleCom;
    while(saleCom<0)
    {
        warning();
        cout<<"How much do you pay for sale commission?"<<endl;
        cin>>saleCom;
    }
    //input purchase price
    double purPrice;
    cout<<"What is the purchase price of your stock?"<<endl;
    cin>>purPrice;
    while(purPrice<0)
    {
        warning();
        cout<<"What is the purchase price of your stock?"<<endl;
        cin>>purPrice;
    }
    //input  purchase commission payment
    double purCom;
    cout<<"How much do you pay for purchase commission?"<<endl;
    cin>>purCom;
    while(purCom<0)
    {
        warning();
        cout<<"How much do you pay for purchase commission?"<<endl;
        cin>>purCom;
    }
    //output result
    double result;
    result = profit(share, salePrice, saleCom, purPrice, purCom);
    cout<<"The amount of profit is $" <<fixed<<setprecision(2)<<result<<endl;
    return 0;
}

void warning()
{
   cout << "Amount must be greater than 0.00 USD.\n";
}
double profit(int share, double salePrice, double saleCom, double purPrice, 
        double purCom)
{
    double result;
    result = (static_cast<double>(share)*salePrice) -saleCom - 
            (static_cast<double>(share)*purPrice) - purCom;
    return result;
}