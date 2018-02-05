/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose : angle math
 * Created on 2018/1/11, PM8:43
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    double angle;
    
    cin >> angle; //in radians
    cout << fixed << setprecision(4) << sin(angle) << endl;
    cout << fixed << setprecision(4) << cos(angle) << endl;
    cout << fixed << setprecision(4) << tan(angle) << endl;
    return 0;
}

