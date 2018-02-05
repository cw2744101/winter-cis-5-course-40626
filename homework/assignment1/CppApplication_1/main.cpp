/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: calculate average of five number
 * Created on January 7, 2018, 8:47 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    double numberOne = 28,
            numberTwo = 32,
            numberThree = 37,
            numberFour = 24,
            numberFive = 33,
            sum,
            average;
    
    sum = numberOne + numberTwo + numberThree + numberFour + numberFive;
    average = sum / 5;
    
    cout << "the average value of the five number is " << average << endl;
    return 0;
}

