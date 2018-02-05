/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: land calculation
 * Created on January 7, 2018, 2:57 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    unsigned int acres;
    float squarefeet;
    
    squarefeet = 391876;
    acres = squarefeet / 43560;
    
    cout << "A land with 391876 sqft is " << acres  << "acres." << endl;
    return 0;
}

