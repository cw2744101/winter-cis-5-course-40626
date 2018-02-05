/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: speed in gas calculator
 * Created on 2018/1/17, PM10:06
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    string substance;
    const double speedA = 331.5, //meter per second for air
            speedB = 972.0,//for helium
            speedC = 258.0,//for carbon dioxide
            speedD = 1270.0;// for hydrogen
    float time;//in second
    double distance;

    cout <<"Please enter the substance you are looking for:"<<endl;
    cin >> substance;
    cout <<"Please enter the time that the substance takes for traveling:"
            <<endl;
    cin >> time;
    
    if ( substance == "air" && time >= 0 && time <= 30)
    {
        distance = speedA * time;
        cout <<"The distance from the receptor to origin is " <<fixed 
                <<setprecision(1)<<distance <<" meters."<<endl;
    }
    else if (substance == "helium" && time >= 0 && time <= 30)
    {        
        distance = speedB * time;
        cout <<"The distance from the receptor to origin is " <<fixed 
                <<setprecision(1)<<distance <<" meters."<<endl;
    }
    else if (substance == "carbon dioxide" && time >= 0 && time <= 30)
    {        
        distance = speedC * time;
        cout <<"The distance from the receptor to origin is " <<fixed 
                <<setprecision(1)<<distance <<" meters."<<endl;
    }
    else if (substance == "hydrogen" && time >= 0 && time <= 30)
    {        
        distance = speedD * time;
        cout <<"The distance from the receptor to origin is " <<fixed 
                <<setprecision(1)<<distance <<" meters."<<endl;
    }
    else
        cout<<"The acceptable value is from 0-30 second, or check your substance"
                <<" to make sure it is air,hydrogen,helium, or carbon dioxide."
                <<endl;
        
    return 0;
}

