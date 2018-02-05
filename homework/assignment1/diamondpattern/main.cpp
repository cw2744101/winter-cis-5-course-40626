/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: diamond shape
 * Created on January 7, 2018, 2:35 PM
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) 
{
    string a,
            b;
    
    a = "*";
    b = " ";
    
    cout << b << b << b << a << b << b << b << endl
            << b << b << a << a << a << b << b << endl
            << b << a << a << a << a << a << b << endl
            << a << a << a << a << a << a << a << endl
            << b << a << a << a << a << a << b << endl
            << b << b << a << a << a << b << b << endl
            << b << b << b << a << b << b << b << endl;
    return 0;
}

