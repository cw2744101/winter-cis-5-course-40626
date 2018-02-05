/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: shiping problem
 * Created on 2018年1月17日, 下午11:22
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    const int MIN_DIS = 10,
            MAX_DIS = 3000,//mile
            MIN_WEI = 0,
            MAX_WEI = 20;//kg
    const float rateA = 1.10,
            rateB = 2.20,
            rateC = 3.70,
            rateD = 4.80;
    float weight;
    double distance,price,quotient;
    int acctualDis;
    
    cout <<"Please enter the weight of your package and distance of traveling:"
            <<endl;
    cin >>weight>>distance;
    acctualDis = static_cast<double>(distance/500);
    quotient = distance/500 - acctualDis;
    
    if (weight <0 or weight >20 or distance >3000 or distance <10)
        cout <<"please check your value entered. The weight of package must be "
                <<"0-20 kg, and the distance must be 10-3000 miles." <<endl;
    else if (weight >0 && weight <= 2)
    {
        if (quotient = 0)
        {
            price = rateA * weight * acctualDis;
            cout <<"The amount you should pay is $" <<price <<endl;
        }
        else
        {
            price = rateA * weight * (acctualDis +1 );
            cout <<"The amount you should pay is $" <<price <<endl;
        }
    }
    else if (weight >2 && weight <= 6)
    {
        if (quotient = 0)
        {
            price = rateB * weight * acctualDis;
            cout <<"The amount you should pay is $" <<price <<endl;
        }
        else
        {
            price = rateB * weight * (acctualDis +1 );
            cout <<"The amount you should pay is $" <<price <<endl;
        }
    }
    else if (weight >6 && weight <= 10)
    {
        if (quotient = 0)
        {
            price = rateC * weight * acctualDis;
            cout <<"The amount you should pay is $" <<price <<endl;
        }
        else
        {
            price = rateC * weight * (acctualDis +1 );
            cout <<"The amount you should pay is $" <<price <<endl;
        }
    }
    else if (weight >10 && weight <=20)
    {
        if (quotient = 0)
        {
            price = rateD * weight * acctualDis;
            cout <<"The amount you should pay is $" <<price <<endl;
        }
        else
        {
            price = rateD * weight * (acctualDis +1 );
            cout <<"The amount you should pay is $" <<price <<endl;
        }
    }
    return 0;
}

