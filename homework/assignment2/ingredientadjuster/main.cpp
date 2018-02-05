/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: cookie formula
 * Created on 2018/1/12, PM6:40
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {

    const float sugar = 1.5,//cup
            butter = 1,//cup
            flour = 2.75; //cup
    unsigned int cookieNmbr;
    float sugarN,butterN,flourN;//ingredient after adjusting
    
    cout << "Please enter how many cookies you want to make." <<endl;
    cin >> cookieNmbr;
    sugarN = sugar * cookieNmbr /48;
    butterN = butter * cookieNmbr /48;
    flourN = flour * cookieNmbr /48;
    cout <<"The amount of ingredients you required are:" <<endl;
    cout << "Sugar: " <<sugarN <<"cup(s)."<<endl;
    cout <<"butter: " <<butterN <<"cup(s)." <<endl;
    cout <<"flour: " <<flourN <<"cup(s)." <<endl;
    return 0;
}

