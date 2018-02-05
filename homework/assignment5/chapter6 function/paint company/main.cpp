/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose:Paint company calculation
 * Created on 2018年2月4日, 上午10:34
 */

#include <iostream>
#include <iomanip>
using namespace std;
//function prototype
double paint(double &);
double time(double &);
double cost(int, double);
double charge(int &);
//global constant
const double price = 25.00;
int main(int argc, char** argv) {
    int room;
    cout<<"Please enter how many rooms do you want to paint."<<endl;
    cin>>room;
    while(room<1)
    {
        cout<<"We don't accept rooms that are less than one."<<endl;
    cout<<"Please enter how many rooms do you want to paint."<<endl;
    cin>>room;
    }
    for(int x=1;x<=room;x++)
    {
        double area;
        double paintPrice;
        int gallon;
        int hour;
        double paintCost;
        double labor;
        double total;
        cout<<"Enter the area of wall for this room."<<endl;
        cin>>area;
        while(area<0)
        {
            cout<<"We don't accept area that is negative."<<endl;
        cout<<"Enter the area of wall for this room."<<endl;
        cin>>area;  
        }
        cout<<"Enter the price for paint,must be greater than 10."<<endl;
        cin>>paintPrice;
        while(paintPrice<10)
        {
            cout<<"We don't accept paint price that is less than 10."<<endl;
        cout<<"Enter the price for paint,must be greater than 10."<<endl;
        cin>>paintPrice;
        }
        cout<<"Calculating......."<<endl;
        gallon = paint(area);
        cout<<"The number of gallon required for this room is "<<gallon<<endl;
        hour = time(area);
        cout<<"The hours required for this room is "<<hour<<endl;
        paintCost = cost(gallon, paintPrice);
        cout<<"The price for paints is $"<<fixed<<setprecision(2)
                <<paintCost<<endl;
        labor = hour * price;
        cout<<"The price for labor is $"<<fixed<<setprecision(2)<<labor<<endl;
        total = labor + paintCost;
        cout<<"The total price for the room is $"<<total<<endl;
    }
    return 0;
}
double paint(double &area)
{
    int result;
    if(static_cast<int>(area)%110==0)
    {
    result = area /110;
    }
    else{
        result = area/110 +1;
    }
    return result;
}
double time(double &area)
{
    int result;
    if(static_cast<int>(area)%110==0)
    {
    result = area /110 * 8;
    }
    else{
        result = (area/110 +1)*8;
    }
    return result;
}
double cost(int gallon, double price)
{
    double result;
    result = static_cast<double>(gallon)*price;
    return result;
}