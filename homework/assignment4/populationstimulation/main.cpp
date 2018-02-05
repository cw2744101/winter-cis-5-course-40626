/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose:
 * Created on 2018/1/22, PM1:48
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

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
    return 0;
}

