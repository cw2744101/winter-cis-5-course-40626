/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose:chemistry report
 * Created on 2018/1/17, PM9:21
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    const int freezeEA = -173, //ethyl alcohol in o/F
            boilEA = 172,
            freezeM = -38, //mercury in o/F
            boilM = 676,
            freezeO = -362, //oxygen in o/F
            boilO = -302,
            freezeW = 32, //water
            boilW = 212;
    int temp;
    
    cout <<"Please enter a temperature in Fahrenheit." <<endl;
    cin >> temp;
    if (temp > boilM)
    {
        cout <<"All substance is in gas state." <<endl;
    }
    else if (temp < boilM && temp > boilW)
    {
        cout <<"Oxygen is in gas state." <<endl;
        cout << "Ethyl Alcohol is in gas state." <<endl;
        cout << "Mercury is in liquid state." <<endl;
        cout <<"Water is in gas state." <<endl;
    }
    else if (temp < boilW && temp > boilEA)
    {
        cout <<"Oxygen is in gas state." <<endl;
        cout << "Ethyl Alcohol is in gas state." <<endl;
        cout << "Mercury is in liquid state." <<endl;
        cout <<"Water is in liquid state." <<endl;
    }
    else if (temp < boilEA && temp > freezeW)
    {
        cout <<"Oxygen is in gas state." <<endl;
        cout << "Ethyl Alcohol is in liquid state." <<endl;
        cout << "Mercury is in liquid state." <<endl;
        cout <<"Water is in liquid state." <<endl;
    }
    else if (temp < freezeW && temp > freezeM)
    {        
        cout <<"Oxygen is in gas state." <<endl;
        cout << "Ethyl Alcohol is in liquid state." <<endl;
        cout << "Mercury is in liquid state." <<endl;
        cout <<"Water is in solid state." <<endl;
    }
    else if (temp < freezeM && temp > freezeEA)
    {     
        cout <<"Oxygen is in gas state." <<endl;
        cout << "Ethyl Alcohol is in liquid state." <<endl;
        cout << "Mercury is in solid state." <<endl;
        cout <<"Water is in solid state." <<endl;
    }
    else if (temp < freezeEA && temp > boilO)
    {        
        cout <<"Oxygen is in gas state." <<endl;
        cout << "Ethyl Alcohol is in solid state." <<endl;
        cout << "Mercury is in solid state." <<endl;
        cout <<"Water is in solid state." <<endl;
    }
    else if (temp < boilO && temp > freezeO)
    {        
        cout <<"Oxygen is in liquid state." <<endl;
        cout << "Ethyl Alcohol is in solid state." <<endl;
        cout << "Mercury is in solid state." <<endl;
        cout <<"Water is in solid state." <<endl;
    }
    else if (temp < freezeO)
    {        
        cout <<"Oxygen is in solid state." <<endl;
        cout << "Ethyl Alcohol is in solid state." <<endl;
        cout << "Mercury is in solid state." <<endl;
        cout <<"Water is in solid state." <<endl;
    }
    return 0;
}

