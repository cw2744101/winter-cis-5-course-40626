/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose : divide pizza
 * Created on 2018/1/11, PM8:53
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    const double Pi = 3.141926;
    double sliceArea,pizzaArea,diameter;
    int sliceNmbr;
    sliceArea = 14.125;
    
    cout << "Please enter the diameter you want for the pizza:" <<endl;
    cin >> diameter;
    pizzaArea = Pi * pow(diameter/2,2);
    sliceNmbr = static_cast<int>(pizzaArea)/(sliceArea);
    cout << "Your will have " << sliceNmbr << " pizza slices." << endl;
    
    return 0;
}

