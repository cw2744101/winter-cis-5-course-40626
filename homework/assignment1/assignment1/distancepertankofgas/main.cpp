/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: calculate distance
 * Created on January 7, 2018, 7:38 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    float atGallon, //average mile each gallon spends while driving in town.
            ahGallon; //average mile each gallon spends while driving in highway
    unsigned int gallonNumber, //the amount of gallon of gasoline in tank
            atDistance, //at town
            ahDistance; //at highway
   
    atGallon = 23.5; // miles
    ahGallon = 28.9;
    gallonNumber = 20; //gallons
 
    atDistance = atGallon * gallonNumber;
    ahDistance = ahGallon * gallonNumber;
    
    cout << "the distance that the car travels in town is " << atDistance
            << "miles." << endl
            << "the distance that the car travels in highway is " << ahDistance
            << "miles." << endl;
    return 0;
}

