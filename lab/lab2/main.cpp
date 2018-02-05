/* 
 * File:   main.cpp
 * Author: chenlin 
 * Purpose
 * Created on 2018/1/11, pm1:56
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    float milBdgt, fedBdgt,mlPrcnt;
    milBdgt = 639.1e09f;
    fedBdgt = 4.094e12f;
    mlPrcnt = milBdgt / fedBdgt * 100; // percentage
    
    cout <<"The percentage that military budget occupies in the federal budget "
            << "is " << setprecision(4) << mlPrcnt << "%." << endl;
    
    return 0;
}

