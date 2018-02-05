/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: ocean level simple calculation
 * Created on January 7, 2018, 8:27 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    float riseRate,
            olOne, //ocean level one
            olTwo, //ocean level after seven years
            olThree;
    unsigned short ftOne, //after five years
            ftTwo,
            ftThree;
    
    riseRate = 1.5; // millimeters per year
    ftOne = 5; // years
    ftTwo = 7;
    ftThree = 10;
    
    olOne = riseRate * ftOne;
    olTwo = riseRate * ftTwo;
    olThree = riseRate * ftThree;
    
    cout << "the ocean level after five years is " << olOne <<"mm higher than "
            << "current one."  << endl;
    cout << "the ocean level after seven years is "<< olTwo <<"mm higher than "
            << "current one."  << endl;
    cout << "the ocean level after ten years is "<< olThree <<"mm higher than "
            << "current one."  << endl;
    
    return 0;
}

